#include "SmartTeam.hpp"

using namespace ariel;

SmartTeam::SmartTeam(Character *leader)
{
}
SmartTeam::SmartTeam(const SmartTeam &other)
{
}
SmartTeam::~SmartTeam()
{
}
int SmartTeam::stillAlive() const
{
    return 0;
}
SmartTeam &SmartTeam::operator=(const SmartTeam &other)
{
    return *this;
}
void SmartTeam::add(Character *fighter)
{
}
void SmartTeam::attack(SmartTeam &enemyTeam)
{
}
void SmartTeam::print() const
{
}
