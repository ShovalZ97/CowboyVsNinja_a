#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#pragma once
#include "Point.hpp"
#include <string>
using namespace std;

namespace ariel
{

    class Character
    {
    private:
        Point location;
        int hitPoints;
        string name;

    public:
        Character(string Name, Point location);
        // Copy constructor
        Character(const Character &other);
        // Move constructor
        Character(Character &&other) noexcept;
        // Copy assignment operator
        Character &operator=(const Character &other);
        // Move assignment operator
        Character &operator=(Character &&other) noexcept;
        // The base class destructor virtual to ensure proper cleanup and avoid potential memory leaks.
        virtual ~Character();

        //Returns a Boolean value whether the character is alive (meaning it has more than zero hit points).
        bool isAlive();
        //Gets a pointer to another character and returns the distance between the characters
        double distance(Character *other);
        //Subtracts the appropriate amount of hit points from the character.
        void hit(int SubHitPoints);
        std::string getName();
        Point getLocation();
        //Prints the name of the character, the number of its hit points, and the point where the character is.
        std::string print();
    };

}

#endif 