#include "doctest.h"
#include "sources/Team.hpp"
#include <vector>
#include <math.h>
#include <sstream>
#include <cmath>
using namespace ariel;
using namespace std;

TEST_CASE("Point :Testing distance between two points")
{
    Point point1(1, 2);
    Point point2(2, 4);

    double dis = std::sqrt(5);
    double disFunction = point1.distance(point2);

    CHECK(dis == disFunction);
}

TEST_CASE("Point :Testing moveTowards function")
{
    Point source(1, 2);
    Point destination(4, 6);
    double distance = 5.0;

    Point result = destination.moveTowards(source, destination, distance);

    // Calculate the expected distance between the result point and the source point
    double expectedDistance = source.distance(result);
    CHECK(expectedDistance <= distance);
}

Point point1(1, 2);
Character character1("Shoval", point1);
TEST_CASE("Testing distance function")
{
    Character character1("Avi", Point(1, 2));
    Character character2("Luda", Point(4, 6));
    double expected_distance = sqrt(20);
    double actual_distance = character1.distance(&character2);
    CHECK(abs(actual_distance) == expected_distance);
}
TEST_CASE("Character: Testing name of character")
{
    CHECK(character1.getName() == "Shoval");
}
TEST_CASE("Character: Test of isAlive function")
{
    CHECK(character1.isAlive() == true);
    character1.hit(20);
    CHECK(character1.isAlive() == false);
}
TEST_CASE("Testing copy constructor")
{
    Character character2(character1);
    CHECK(character2.getName() == "Shoval");
}
TEST_CASE("Cowboy")
{
    Cowboy cowboy("Shoval", Point(2, 6));

    // Before the cowboy reload his gun
    CHECK(cowboy.hasBullets() == false);

    // The cowboy reloag his gun and add 6 bullets
    cowboy.reload();
    CHECK(cowboy.hasBullets() == true);

    // The cowboy shoot on the enemy
    Character enemy("Ziv", Point(4, 8));
    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);
}

TEST_CASE("Ninja: Testing move, slash, and print functions")
{
    // Test case 1: Ninja moves towards the enemy
    Point ninjaLocation(0, 0);
    Point enemyLocation(5, 5);

    Character enemy("Ziv", enemyLocation);
    Ninja ninja("Shoval", ninjaLocation);

    ninja.move(&enemy);

    // Expected outcome: Ninja's location should be closer to the enemy
    CHECK(ninja.getLocation().distance(enemyLocation) < ninjaLocation.distance(enemyLocation));

    // Test slashing an enemy
    ninja.slash(&enemy);
    CHECK(enemy.isAlive() == false);

    // Test case 4: Ninja prints its information
    Ninja ninja4("Ninja", Point(0, 0));

    std::string expectedOutput = "Name: Ninja, Hit Points: 100, Bullets: 5";
    CHECK(ninja4.print() == expectedOutput);
}
TEST_CASE("Ninja : more tests to check the details of all ninjas")
{
    Character character1("YoungNinja", Point(0, 0));
    character1.hit(20);
    CHECK(character1.isAlive() == true);
    CHECK(character1.print() == "Name: YoungNinja, Hit Points: 80, Location: (0, 0)");

    Character character2("TrainedNinja", Point(1, 1));
    character2.hit(20);
    CHECK(character2.isAlive() == true);
    CHECK(character2.print() == "Name: TrainedNinja, Hit Points: 100, Location: (1, 1)");
    character2.hit(100);
    CHECK(character2.isAlive() == false);

    Character character3("OldNinja", Point(1, 2));
    character3.hit(50);
    CHECK(character2.isAlive() == true);
    CHECK(character2.print() == "Name: OldNinja, Hit Points: 100, Location: (1, 2)");
}
TEST_CASE("Ninja: Testing move function when enemy is far away")
{
    // Test case: Ninja does not move when the enemy is far away
    Point ninjaLocation(0, 0);
    Point enemyLocation(10, 10);

    Character enemy("Ziv", enemyLocation);
    Ninja ninja("Shoval", ninjaLocation);

    // Calculate the initial distance between the ninja and the enemy
    double initialDistance = ninja.getLocation().distance(enemy.getLocation());

    ninja.move(&enemy);

    // Calculate the final distance between the ninja and the enemy after moving
    double finalDistance = ninja.getLocation().distance(enemy.getLocation());

    // Expected outcome: Final distance should be equal to the initial distance since the ninja does not move
    CHECK(finalDistance == initialDistance);
}