#include <iostream>

using namespace std;

class Base{
public:
    virtual void say_hello(){
        cout << "I am a base class object" << endl;
    }
    virtual ~Base(){};
};

class Derived: public Base{
public:
    virtual void say_hello() override{
        cout << "I am a derived class object" << endl;
    }
    virtual ~Derived(){};
};


int main() {
    
    Base *base = new Base();
    Derived *derived = new Derived();
    Base *base2 = new Derived();
    
    base->say_hello();
    derived->say_hello();
    base2->say_hello();
    
    return 0;
}