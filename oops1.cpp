#include <iostream>
// #include<hero.cpp>

using namespace std;

class Hero{

    private: // sirf class ke and access 
    int health;
    
    public: // bahar bhi access kr skte h
    char level;
};

int main(){

    //creation of object
    Hero ramesh;
    ramesh.health = 70; ramesh.level = 'B';
    cout << "health is: " << ramesh.health << endl;
    cout << "level is: " << ramesh.level << endl;

    // cout << "Size : " << sizeof(h1) << endl;
    return 0;
}