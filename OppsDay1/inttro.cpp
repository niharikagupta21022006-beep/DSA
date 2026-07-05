#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {
    int health = 6;
    public:
    char level = 'A';

    int getHealth() {
        return health;
    }

    int getLevel(){
        return level;
    }

    Hero(){
        cout << "constructor is called" << endl;
    }

    
    

    

};
int main(){

    // cout << Niharika.getHealth() << endl;
    // // Niharika.setHealth(100,'A');
    // // cout << Niharika.getHealth() << endl;

    // // cout << "Health" << Niharika.health << endl;
    // cout << "Level is" << Niharika.level << endl;

    // Hero *b = new Hero;

    // b->setLevel('A');
    // b->setHealth(70);
    // cout << "Level is" << (*b).level << endl;
    // cout << "Health is" << (*b).getHealth() << endl;

    // cout << "level is" << b->level << endl;



    // cout << "Size :" << sizeof(Niharika) << endl;

    cout << "Hi" << endl;
    Hero Niharika;
    cout << "Hello" << endl;
}