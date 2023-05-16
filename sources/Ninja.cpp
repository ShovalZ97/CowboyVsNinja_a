#include "Ninja.hpp"

#include <string>
using namespace std;
using namespace ariel;

// Constructor
Ninja::Ninja(string name,Point location) : Character(name,location) 
{
}
void Ninja::move(Character *enemy)
{
}
void Ninja::slash(Character *enemy) const
{
}
std::string Ninja::print() 
{
    return ""; 
}