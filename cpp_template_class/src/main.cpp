#include <iostream>

using namespace std;

template<class T>
class MyClass{
	private:
		T obj;
	
	public:
		MyClass(T obj) : obj(obj) {}
		MyClass() {}
		void print() { cout << obj << endl; }
		void print(T entrance) { cout << "Entrance: " << entrance << endl;}
};

template<class K>
void printMyWords(K myWords){
	cout << "MY Words: " << myWords << endl;
}
int main(){

	MyClass<int> myClass(5);

	myClass.print();

	MyClass<double> myClass2;
	myClass2.print(18.7);

	printMyWords<int>(17);


}