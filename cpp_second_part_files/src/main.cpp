#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

struct person{
	char name[50];
	int age;
	double height;
};

int main(){

	ofstream outFile;
	string fileName = "test4.txt";

	outFile.open(fileName);

	if(!outFile.is_open()){
		cout << "no such a file or directory" << endl;
		return EXIT_FAILURE;
	}

	outFile << "Furkan Yıldırım\nZirve optik pazarlama"
		"\nArduino Raspberry pi kaktüs" << endl;

	outFile.close();

	ifstream inFile;
	inFile.open(fileName);

	if(!inFile.is_open()){
		cout << "no such a file or directory" << endl;
		return EXIT_FAILURE;
	}

	string line;

	while(inFile){
		getline(inFile, line);
		//inFile.get();
		cout << line << endl;
	}

	cout << line << endl;
	inFile.close(); 

	person someone = {"Ali", 40, 1.80};

	ofstream outFile2;
	string fileNameNew = "test5.bin";
	outFile2.open(fileNameNew, ios::binary);

	if(!outFile2.is_open()){
		cout << "ERROR!!!" << endl;
		return EXIT_FAILURE;
	}
	
	outFile2.write(reinterpret_cast<char*>(&someone), sizeof(person));

	outFile2.close();
	person a = {};

	ifstream inputFile;
	inputFile.open("test5.bin", ios::binary);

	if(inputFile.is_open()){
		inputFile.read(reinterpret_cast<char*>(&a), sizeof(person));
		inputFile.close();
	}
	else{
		cout << "ERROR READİNG!!!" << endl; 
		return EXIT_FAILURE;
	}

	person someoneElse = {};

	ifstream inputFile;

	inputFile.open(fileNameNew, ios::binary);

	if (inputFile.is_open()) {

		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(person));

		inputFile.close();
	} else {
		cout << "Could not read file " ;
	}
	cout << someoneElse.name;

	return 0;	
}