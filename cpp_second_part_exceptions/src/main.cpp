#include <iostream>

using namespace std;

class CanGoWrong{
	public: 
		CanGoWrong(){
			try{
				char *p = new char[9999999999999999];
				delete [] p;
			}catch(exception e){
				cout << "HATA: " << e.what() << endl;
			}
		}
};

void somethingGoWrong(){

	bool error = false;
	bool error2 = true;

	if(error){
		throw "Error...";
	}
	if(error2){
		throw string("Error2 ...");
	}
}

int main(){
	
	try{
		somethingGoWrong();
	}catch(char const* exception){
		cout << "Error handling 1 is running: " << exception << endl;
	}catch(string &error2){
		cout << "Error handling 2 is running: " << error2 << endl;
	}

	try{
		CanGoWrong canGoWring;
	}catch(bad_alloc &exception){
		cout << "Error caught: " << exception.what() << endl;
	}catch(char const* exp){
		cout << "UZUN dizi: " << exp << endl;
	}

	cout << "Program Çalışıyor" << endl;



}