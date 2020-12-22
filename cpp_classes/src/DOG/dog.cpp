#include <iostream> 
#include "dog.h"

using namespace std;

    Dog::Dog(){
        cout << "Dog has been initialized..." << endl;

        happy = true;
    }

    Dog::Dog(string newDogName){
        dogName = newDogName;
        cout << this << endl;
    }
    
    Dog::Dog(string newDogName, int dogAge){
        dogName = newDogName;
        this->dogAge = dogAge;
    }

    Dog::~Dog(){
        cout << "Dog has been destructed..." << endl;
    }

    void Dog::setDogName(string setDogName){
        dogName = setDogName;
    }

    string Dog::getDogName(){
        return dogName;
    }

    void Dog::speak(){
        cout << "Havvavv" << endl;
    }

    void Dog::play(){
        if(happy){
            cout << "Dog is playing" << endl;
        }else if(!happy){
            cout << "Dog do not want to play" << endl;
        }else{
            cout << "Dog do not know what to do" << endl;
        }
    }

    void Dog::happyDog(){
        happy = true;
    }
    void Dog::sadDog(){
        happy = false;
    }



    
    


