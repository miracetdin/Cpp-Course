#include <iostream>

using namespace std;

class Box{
    double width;
    
public:
    static int objCount;
    
    Box(){
        objCount++;
    }
    double length;
    friend void printWidth(Box box);
    void setWidth(double wid);
    
    static int getCount(){
        return objCount;
    }
};

void Box::setWidth(double wid){
    width = wid;
}

// not a member funtion/method
// friend method
void printWidth(Box box){
    cout << "width of box: " << box.width << endl;
}

int Box::objCount = 0;

int main(){
    Box box1;
    box1.setWidth(10);
    printWidth(box1);
    
    Box *box_ptr;
    box_ptr = &box1;
    cout << "pointer: " << endl;
    printWidth(*box_ptr);
    
    Box box2;
    
    cout << "count: " << Box::getCount() << endl;
}