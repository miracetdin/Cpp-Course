#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
    // attributes
    string name;
    int age;
    
    // constructor
    Player(string n, int a){
        name = n;
        age = a;
        //this->name = name;
        //this->age = age
    }
    // destructor
    //~Player();
    
    // friend function can access the private and protected data of a class
    
    // methods
    void talk(string s);
    
};

void Player::talk(string s){
    cout << name << " says " << s << endl;
}

int main(){
    Player player1 {"Ali", 25};
    cout << player1.name << " is " << player1.age << endl;
    
    Player *player2 = new Player("Ahmet", 32);
    delete player2;
    
    
}