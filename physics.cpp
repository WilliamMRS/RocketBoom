#include "physics.h"
using namespace std;

double PhysicsObjects::getPoint1()
{
    return posX, posY;
}
void PhysicsObjects::setPoint1(punkt1.setPoint(int x, int y))
{
    posX = x;
    posY = y;
}

double PhysicsObjects::getPoint2()
{
    return posX, posY;
}
void PhysicsObjects::setPoint2(PhysicsObjects::Point(double x, double y), double lengde)
{
    posX = x + lengde;
    posY = y;
}

double PhysicsObjects::getPoint3()
{
    return posX, posY;
}
void PhysicsObjects::setPoint3(PhysicsObjects::Point(double x, double y), double lengde)
{
    posX = x + lengde;
    posY = y + lengde;
}

double PhysicsObjects::getPoint4()
{
    return posX, posY;
}
void PhysicsObjects::setPoint4(PhysicsObjects::Point(double x, double y), double lengde)
{
    posX = x;
    posY = y  + lengde;
}

