#include <iostream>
#include <sstream>
#include "DOG/dog.h"

using namespace std;

int main(){
	Dog dog;	
	dog.play();
	dog.sadDog();
	dog.play();

	dog.setDogName("Karabaş");
	cout << dog.getDogName() << endl; 

	stringstream myString;

	int a = 15;
	string b = "Benim adım ";

	myString << b;
	myString << "Furkan ";
	myString << "Yıldırım";
	myString << "Yaşım: ";
	myString << a;

	cout << myString.str() << endl;

	string myDogName;
	cin >> myDogName;
	Dog myDog(myDogName);

	cout << myDog.getDogName() << endl;

	cout << "Size of Dog class: " << sizeof(Dog) << endl;

	cout << &myDog << endl;
	

}