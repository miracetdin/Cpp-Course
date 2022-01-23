#include <iostream>

using namespace std;

class Base{
public:
    void say_hello() const{
        cout << "I am a base class object" << endl;
    }
};

class Derived: public Base{
public:
    void say_hello() const{
        cout << "T am a derived class object" << endl;
    }
};


int main() {
    
    Base base;
    Derived derived;
    
    base.say_hello();
    derived.say_hello();
    
    return 0;
}