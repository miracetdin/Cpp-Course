#include <iostream>

using namespace std;

class Box{
private:
    double length;
    double breadth;
    double height;
    
public:
    void setHeight(double h){
        height = h;
    }
    void setLength(double l){
        length = l;
    }
    void setBreadth(double b){
        breadth = b;
    }
    
    double getVolume(){
        return this->length * this->breadth * this->height;
    }
    
    Box operator+ (const Box &b){
        Box box;
        box.length = this->length + b.length;
        box.height = this->height + b.height;
        box.breadth = this->breadth + b.breadth;
        return box;
    }
    
};

int main(){
    Box box1;
    
    box1.setBreadth(3);
    box1.setHeight(3);
    box1.setLength(3);
    
    Box box2;
    
    box2.setBreadth(2);
    box2.setHeight(2);
    box2.setLength(2);
    
    Box box3;
    
    box3 = box1 + box2;
    
    cout << "box1: " << box1.getVolume() <<  endl;
    cout << "box2: " << box2.getVolume() <<  endl;
    cout << "box3: " << box3.getVolume() <<  endl;
    
    return 0;
}