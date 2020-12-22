#ifndef DOG_H_
#define DOG_H_

#include <iostream>
using namespace std;
class Dog{
    private:
        string dogName;
        int dogAge;
        bool happy;
    public:
        void speak();
        void play();
        void happyDog();
        void sadDog();
        void setDogName(string setDogName);
        string getDogName();

        Dog();
        ~Dog();
        Dog(string newDogName);
        Dog(string newDogName, int dogAge);

};
#endif