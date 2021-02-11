#ifndef PHYSICS
#define PHYSICS

#include <stdio.h>
#include <vector>
#include <string>
#include "physics.h"
#include "point.h"
using namespace std;

class PhysicsObjects
{   
    private:
    double lengde;
    double posX;
    double posY;

    public:
        class Point
        {
        int x_coord, y_coord;

        public:
            Point() : x_coord(0), y_coord(0) {}

            void setPoint(int x, int y)
		    {
			    x_coord = x;
			    y_coord = y;
		    }
            int getX(void) 
            {
                return x_coord;
            } 
            int getY(void)
            {
                return y_coord;
            }

            };
        
        PhysicsObjects punkt1, punkt2, punkt3, punkt4;
        
        double getPoint1();
        void setPoint1(punkt1.setPoint(int x, int y));
        double getPoint2();
        void setPoint2(Point(double x, double y), double lengde);
        double getPoint3();
        void setPoint3(Point(double x, double y), double lengde);
        double getPoint4();
        void setPoint4(Point(double x, double y), double lengde);

        PhysicsObjects()
        {
            
        };
};

#endif