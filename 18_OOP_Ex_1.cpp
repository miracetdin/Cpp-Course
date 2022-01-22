#include <iostream>

using namespace std;

class Box{
// access modifiers
/*
 * public
 * private
 * protected: similar to a private but they can be accessed in child classes
 */
private:
    // attributes
    double length;
    double heigth;
    double breadth;
public:
    // getter and setter methods definitions
    void set_length(double len);
    void set_heigth(double hei);
    void set_breadth(double bre);
    double get_length();
    double get_height();
    double get_breadth();
    // method definition
    double volume();
};

// methods
void Box::set_length(double len){
    // this keyword: this object/this box
    // this->length: the length of this box
    this->length = len;
}

void Box::set_heigth(double hei){
    this->heigth = hei;
}

void Box::set_breadth(double bre){
    this->breadth = bre;
}

double Box::get_length(){
    return this->length;
}

double Box::get_height(){
    return this->heigth;
}

double Box::get_breadth(){
    return this->breadth;
}

double Box::volume(){
    return this->length * this->heigth * this->breadth; 
}

int main(){
    Box box1;
    
    box1.set_length(5);
    box1.set_heigth(5);
    box1.set_breadth(10);
    
    cout << "length: " << box1.get_length() << endl;
    cout << "height: " << box1.get_height() << endl;
    cout << "breadth: " << box1.get_breadth() << endl;
    
    cout << "volume: " << box1.volume() << endl;
    
}