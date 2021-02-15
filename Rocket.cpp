#include "Rocket.h"

Rocket::Rocket(){
    double screenWidth = 10;
    double screenHeight = 10;
    posX = screenWidth / 2;
    posY = screenHeight * 3 / 4;
    velY = 0;
}

void Rocket::setPosX(double px){
    posX = px;
}
void Rocket::setPosY(double py){
    posY = py;
}
void Rocket::setVelX(double vx){
    velX = vx;
}
void Rocket::setVelY(double vy){
    velY = vy;
}

double Rocket::getPosX(){
    return posX;
}
double Rocket::getPosY(){
    return posY;
}
double Rocket::getVelX(){
    return velX;
}
double Rocket::getVelY(){
    return velY;
}