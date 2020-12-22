#include <iostream>
#include <typeinfo>
#include <vector>
#include "ring.h"
#include "stone.h"
#include <initializer_list>
#include <functional>

using namespace std;

template<class T>
auto myFunction(T n1, T n2) -> decltype(n1) {
	return n1 + n2;
}

int add(int a, int b, int c){
	cout << " a, b, c :" << a << b << c << endl;
	return a+b+c;
}

class Test{
	public:
		int id;
		string name;

	public:
		Test(initializer_list<string> texts, int myID, string name) : id(myID), name(name) {
			for(auto text : texts){
				cout << text << endl;
			}
			cout << id << " and " << name << endl;
		}
		Test() = default;
};

void greetTest(void (*greet)(string)){
	greet("Hello greetTest");
}

auto myPointer(int (*my_pLambda)(int a, int b)){
	return my_pLambda(8, 9);
}

class testClassNew{
	public:
		int one{8};
		int two{17};
		string three{"Ali"};

	public:
		void print(){
			[this](){
				cout << "one: " << one << " two: " << two << endl;
			}();
		}
};

int main(){

	auto a = 0.44;
	
	
	auto calculate = bind(add, 3, 4, 5);
	cout << calculate() << endl;

	testClassNew testNew;

	int int_for_func3{7};

	function<int(int, int)> myFunc = [](int a, int b){ return a+b; };
	auto myFunc3 = [&, int_for_func3](int a, int b){ return a+b+int_for_func3; };
	auto myFunc2 = [](int a, int b){ return a+b; };


	cout << myFunc3(1, 2) << endl;
	cout << myFunc(17, 9) << endl;
	cout << "myFunc2: " << myFunc2(80, 79) << endl;
	
	testClassNew testnew;
	testnew.print();
	int one = 10;

	Test myTestClass({"A", "B", "CDF"}, 15, "Ali");
	Test myTest2Class;

	auto pLambda = [](string text){cout << text << endl;};

	pLambda("My name is Furkan");

	greetTest(pLambda);
	
	auto secondLambda = [](int a, int b){
		return a+b;
	};
	cout << "sss" << myPointer(secondLambda) << endl;

	auto oneLambda = [&one](string text){one = 80; cout << text << endl; };

	oneLambda("Ali");
	//cout << one << endl;

	[one](){ cout << one << endl; }();




	/* int value{17};
	cout << value << endl;

	int a[3] = {1, 2, 3};
	cout << a[0] << endl;
	int b[]{4, 5, 6};
	cout << b[1] << endl;

	int *p_int = new int[3]{7, 8, 9};	
	cout << *(p_int + 1) << endl; 
	delete p_int;

	int *p_int_2{nullptr};
	cout << p_int_2 << endl;

	vector<int> myVector{1, 22, 3};
	cout << myVector[2] << endl; */

	//auto values = {7, 97, 2, 4};

	/* class A{
	public:
		int id;
		string text;
		string text2;
	};

	A a1 = {17, "Hello", "HelloAgain"};

	cout << a1.text << endl;
	cout << a1.id << endl;
	cout << a1.text2 << endl;

	struct B{
		string text;
		int id;
	};

	B mS1 = {"STRUCTURE", 17};

	cout << mS1.text << endl; */

	/* Ring<string>::MySecondRing classs;

	classs.print(" My name is Ali");

	Stone<int> myStone;

	myStone.print(17);

	Stone<string> myStone2();

	Ring<int> testRing;
 */

	/* vector<int> myVector;

	myVector.push_back(15);
	myVector.push_back(11);
	myVector.push_back(78);

	for(auto elements : myVector){
		cout << elements << endl;
	} 

	cout << endl;

	for(vector<int>::iterator it = myVector.end() -1; it != myVector.begin() -1; it--){
		cout << *it << endl;
	}

	auto texts = {"one", "two", "three"}; */
	/* for(auto text : texts){
		cout << text << endl;
	} */

	/* auto integer_value = 78;
	auto myString = "Bob";

	cout << myString << endl;
	cout << integer_value << endl;

	cout << myFunction(7, 8) << endl;
 */
	
	/* string value;
	cout << typeid(value).name() << endl; */
}