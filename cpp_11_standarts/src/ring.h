#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

template<class K>
class Ring{
    public:
        class MySecondRing;
        
};

template<class K>
class Ring<K>::MySecondRing{
    public:
        void print(K value){
            cout << "Hello there Furkan" << value << endl;
        }
};
#endif