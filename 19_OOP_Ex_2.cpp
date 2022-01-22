#include <iostream>

using namespace std;

class Line{
private:
    double lenght;
    
public:
    void setLength(double length);
    double getLenght();
    // constructor declaration
    Line(double len);
    // destructor declaration
    ~Line();
};

// constructor
Line::Line(double len){
    lenght = len;
    cout << "Object is being created, length: " << len << endl;
}

Line::~Line(){
    cout << "Object is deleted" << endl;
}

void Line::setLength(double len){
    lenght = len;
}

double Line::getLenght(){
    return lenght;
}

int main(){
    Line line(15);
    line.setLength(10);
    cout << "length: " << line.getLenght() << endl;
    line.~Line();
    cout << "program exitting..." << endl;
    
    return 0;
}