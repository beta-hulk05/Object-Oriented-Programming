#include <iostream>
// #include<hero.cpp>

using namespace std;

class Hero{

    private: // sirf class ke and access 
    int health;
    
    public: // bahar bhi access kr skte h
    char level;

    void print(){
        cout << level << endl;
    }
    // getters and setters
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    // void setHealth(int h, char name){
    //     if(name =='A'){
    //         health = h;
    //     }
    // }
    void setHealth(int h){
            health = h;
    }

    void setLevel(char ch ){
        level  = ch;
    }
};

int main(){


    // static allocation
    Hero a;

    cout << "level is " << a.level <<endl;
    cout << "health is " << a.getHealth() << endl;
    // dynamic allocation
    Hero *b = new Hero;
    cout << "level is " << (*b).level <<endl;
    cout << "health is " << (*b).getHealth() << endl; // (*b) - > derefernce krne ke liye coz b was a pointer
    // better way
    cout << "level is " << b->level <<endl;
    cout << "health is " << b->getHealth() << endl;

    //creation of object
    // Hero ramesh;
    // cout << "Size of ramesh is" << sizeof(ramesh) << endl;
    // ramesh.setHealth(78);
    // cout << "Ramesh health is : " << ramesh.getHealth() << endl;
    // // sethealth
    
    // // ramesh.health = 70; ramesh.level = 'B';
    // // cout << "health is: " << ramesh.health << endl;
    // cout << "level is: " << ramesh.level << endl;

    // cout << "Size : " << sizeof(h1) << endl;
    return 0;
}