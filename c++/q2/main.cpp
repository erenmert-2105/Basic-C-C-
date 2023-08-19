#include <iostream>

class Animal{

public :
    animal();
    move();
    breath();
    eat();
    sleep();
    wakeup();
    die();
private:
    double weight;
    double height;
    double lifetime;
};

class Bird : Animal {
public :
    wlenght();
    void fly(){
    printf("i am flying");
    }



};


int main()
{
    Bird mybird();
    return 0;
}
