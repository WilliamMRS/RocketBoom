class Rocket{
    private: 
        double posX;
        double posY;
        double velX;
        double velY;
    public:
        Rocket();
        void setPosX(double px);
        void setPosY(double py);
        void setVelX(double vx);
        void setVelY(double vy);
        double getPosX();
        double getPosY();
        double getVelX();
        double getVelY();
        void moveX();
        void moveY();
};