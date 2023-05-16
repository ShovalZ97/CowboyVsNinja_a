#include "Cowboy.hpp"

using namespace ariel;

//Constructor
Cowboy::Cowboy(string name,Point location) : Character(name,location) 
{
}
void Cowboy::shoot(Character* enemy) 
{
}
void Cowboy::reload() 
{
}
bool Cowboy::hasBullets() const 
{    
    return false; 
}
