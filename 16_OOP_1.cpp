#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    public:
    // attributes
    string name;
    int health;
    int xp;
    
    // default constructor
    // don't have to define a constructor
    
    // constructor (overloaded)
    Player(){
        cout << "constructor 1";
    }
    Player(string name_): name("None"){
        cout << "constructor 2";
    }
    Player(string name_, int xp_){
        name = name_;
        xp = xp_;
        cout << "constructor 3";
    }
    // destructor
    ~Player(){
        cout << "destructor";
    }
    
    // methods
    void talk(string s){
        cout << name << " says " << "'" << s << "'." << endl;
    }
    bool is_dead();
    
};

//  void PLayer::talk(string s){
//        cout << name << " says " << "'" << s << "'." << endl;
//  }

int main() {
    
    Player mirac;
    mirac.name = "Mirac";
    mirac.health = 85;
    mirac.xp = 1534;
    
    cout << "The player 1: " << mirac.name << endl;
    mirac.talk("Hello there");
    
    Player player2 {"Ali", 1729};
    cout << "The player 2: " << player2.name << endl;
    
    Player player3{"Mehmet"};
    cout << "The player 3: " << player3.name << endl;
    
    return 0;
}