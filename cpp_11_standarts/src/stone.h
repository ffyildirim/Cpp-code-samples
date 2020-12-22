#ifndef STONE_H_
#define STONE_H_

template<class T>
class Stone{

    public:
    
        Stone() {}
        void print(T value){
            cout << "This is stone's print function!!! " << value << endl;
        }
};


#endif