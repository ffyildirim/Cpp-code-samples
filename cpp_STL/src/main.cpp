#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;
class Person{
	public:
		string name;
		int age;

	public:	
		Person() : name("Default"), age(0) {};
		Person(string personName, int personAge) : name(personName), age(personAge) {};
		bool operator<(const Person &other) const { return age < other.age;};
};

int main(){	

	

	stack<int> myStack;

	myStack.push(15);
	myStack.push(22);
	myStack.push(11);
	myStack.push(16);

	cout << myStack.top() << endl;
	cout << endl;

	queue<int> myQueue;
	myQueue.push(20);
	myQueue.push(17);
	myQueue.push(90);
	myQueue.push(45);

	cout << myQueue.front() << endl;
	cout << myQueue.back() << endl; 

	/////// SETS *******************************************************
	set<double> mySet;

	mySet.insert(15.87);
	mySet.insert(20.71);
	mySet.insert(19.06);
	mySet.insert(19.06);



	for(set<double>::iterator it=mySet.begin(); it != mySet.end(); it++){
		cout << "MySet: " << *it << endl;
	}

	if(mySet.count(15.88)){
		cout << "BULUNDU!" << endl;
	} 
	////////////////////////// MAPS **************************************************

	map<int, Person> myMap;

	myMap[0] = Person("Ali", 15);

	map<Person, int> myMap2;
	

	myMap2[Person("Mehmet", 20)] = 1;
	myMap2[Person("Kaan", 25)] = 2;
	myMap2[Person("Ali", 60)] = 3;
	myMap2[Person("Veli", 60)] = 75;

	for(map<Person, int>::iterator it = myMap2.begin(); it != myMap2.end(); it++){
		cout << "KEY: " << it->first.name << ", " << it->first.age << " : " << it->second << endl;
	}
	cout << endl;
	multimap<int, string> multiMap;
	multiMap.insert(pair<int, string>(15, "Albert"));
	multiMap.insert(pair<int, string>(12, "Einstein"));
	multiMap.insert(pair<int, string>(15, "Tesla"));
	multiMap.equal_range(15);


	for(multimap<int, string>::iterator its = multiMap.begin(); its != multiMap.end(); its++){
		cout << "KEY: " << its->first << " : " << its->second << endl;
	} 


	map<string, int> ages;
	ages["Jhon"] = 25;
	ages["Ahmet"] = 18;
	ages["Elizabeth"] = 10;
	ages["Veli"] = 12;

	cout << ages["Jhon"] << endl;
	map<string, int>::iterator myMapIt = ages.begin();
	myMapIt++;
	myMapIt++;


	ages.find("Ali");
	if(ages.find("Ahmet") != ages.end()){
		cout << "found!!!" << endl;
	}

	pair<string, int> addToMap("Veli", 14);

	ages.insert(addToMap);
	ages.insert(make_pair("Yüz", 100));

	for(map<string, int>::iterator myMapIt2 = ages.begin(); myMapIt2 != ages.end(); myMapIt2++ ){
		cout << myMapIt2->first << endl;
	} 
	////////////////// LIST *******************************************************
	list<int> myList(9, 1);

	myList.push_back(5);
	list<int>::iterator itList = myList.begin();

	itList++;
	//itList = myList.erase(itList);
	
	for(int i=0;i<myList.size();i++){
		cout << "Elements: " << *itList++ << endl;
	} 

	//////////////// TWO DIMENSIONAL VECTORS  ********************************
	vector<vector<int>> myVector(3, vector<int>(5,2));

	myVector[0].push_back(8);
	for(int i=0; i < myVector[2].size();i++){
		cout << myVector[0][i] << endl;
	}



	//myVector.pop_back();

	vector<int> mySecondVector(4, 3);

	mySecondVector.push_back(7);
	mySecondVector.push_back(12);
	mySecondVector.pop_back();
	mySecondVector.pop_back();
	mySecondVector.pop_back();
    
	vector<int>::iterator it = mySecondVector.begin();
	it+=2;
	mySecondVector.insert(it, 8);

	it = mySecondVector.erase(it);

	for(int i=0;i<mySecondVector.size();i++){
		cout << mySecondVector[i] << ", ";
	} 	

////////// VECTORS AND MEMORY *************************************
vector<double> myDoubleVector;

int capacity = myDoubleVector.capacity();

cout << capacity << endl;

for(int i=0;i<1000;i++){
	if(myDoubleVector.capacity() != capacity){
		capacity = myDoubleVector.capacity();
		cout << capacity << endl;
	}
	myDoubleVector.push_back(i);
}

//myDoubleVector.clear();
myDoubleVector.resize(50);
myDoubleVector.reserve(2000);
cout << "SİZE: " << myDoubleVector.size() << endl;
cout << "CAPACİTY: " << myDoubleVector.capacity() << endl; 

////// VECTORS *******************************************
 	vector<string> myVectors;

	myVectors.push_back("ali");
	myVectors.push_back("veli");
	myVectors.push_back("mehmet");
	myVectors.push_back("can");

	cout << myVectors.size() << endl;
	cout << myVectors[5] << endl; 

	vector<string>::iterator myIterator = myVectors.begin();

	cout << *(myIterator+3) << endl;
 
	
}