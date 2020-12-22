#include <iostream>

using namespace std;

void changeValue(double &value){
	value = 1170.258;
}
class Animal {
private:
	string name;

public:
	Animal() { cout << "Animal created." << endl; };
	Animal(const Animal& other): name(other.name) { cout << "Animal created by copying." << endl; };
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; }
};

class Person {
	private:
		
	public:
		string personName;
		~Person() {cout << "Person destructed..." << endl;};
		Person();
		Person(string personName) :personName(this->personName) {cout << "Person created..." << endl;};
		Person(const Person &otherPerson) :personName(otherPerson.personName) {cout << "Created other person..." << endl;};
		void speak() {cout << "My name is " << personName << endl;}
		
};

int main(){

 	Person person1;
	person1.personName = "Ali"; 
	Person person2 = person1;


	cout << person2.personName << endl;

	Person person3(person2);

	cout << person3.personName << endl;

	Person *person4 = new Person();

	person4->personName = "Muzaffer";

	cout << person4->personName << endl;

	delete person4;
	
	int a = 10;
	int* a_ptr = &a;
	char char_array[] = "hello";

	string text[] = {"Uçak", "Helikopter", "İHA"};

	cout << "Address of a: " << a_ptr << endl;
	cout << "Value of a: " << *a_ptr << endl;

	cout << "text[0]: " << *(text+1) << endl;

	cout << "char_array: " << &char_array << endl;

	int val1 = 20;
	int &val2 = val1;
	val2 = 50;

	cout << "val: " << val1 << endl;

	double value = 20.8;

	changeValue(value);

	cout << "value: " << value << endl;

	int val1_const = 50;
	int val2_const = 100;
	int * const val_const_ptr = &val1_const;

	*val_const_ptr = val1_const;



	cout << "Val Constant lesson: " << *val_const_ptr << endl;

	Animal animal1;

	animal1.setName("Ali");

	Animal animal2 = animal1; 

	Person *person = new Person("Mehmet");



	char k = 'a';

	string t(7, k);

	cout << t << endl;
} 