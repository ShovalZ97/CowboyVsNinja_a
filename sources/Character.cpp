#include "Character.hpp"

using namespace std;

using namespace ariel;
Character::Character(std::string name1, Point location)
{
}
Character::Character(const Character &other)
{
}
Character::Character(Character &&other) noexcept
{
}
Character::~Character()
{
}
bool Character::isAlive()
{
    return false;
}
double Character::distance(Character *other)
{
    return 0.0;
}
void Character::hit(int hittPoints)
{
}
Point Character::getLocation()
{
    return Point();
}
std::string Character::getName()
{
    return "";
}
std::string Character::print()
{
    return "";
}
Character &Character::operator=(const Character &other)
{
    return *this;
}
Character &Character::operator=(Character &&other) noexcept
{
    return *this;
}
