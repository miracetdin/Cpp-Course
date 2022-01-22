#include <iostream>

using namespace std;

class Line{
private:
    int *ptr;
    
public:
    int getLength();
    // default constructor
    // Line();
    // Overloaded Constructor
    Line(int len);
    // Copy constructor
    Line(const Line &obj);
    // destrcutor
    ~Line();
};

Line::Line(int len){
    // allocate memory
    ptr = new int;
    *ptr = len;
    
    cout << "Constructor allocated memory for pointer" << endl;
}

Line::Line(const Line &obj){
    // copy
    ptr = new int;
    *ptr = *obj.ptr;
    
    cout << "Copy constructor allocated memory for pointer" << endl;
}

Line::~Line(){
    cout << "Freeing memory" <<  endl;
}

int Line::getLength(){
    return *ptr;
}

int main(){
    Line line1{10};
    cout << "line 1: " << line1.getLength() << endl;
    Line line2 = line1;
    cout << "line2 copied from line1" << endl;
    cout << "line 2: " << line2.getLength() << endl;
    
    return 0;
}