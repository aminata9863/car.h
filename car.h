#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();
    void setSpeed(int speed);
    int getSpeed() const;
private:
    int speed;
};

#endif
