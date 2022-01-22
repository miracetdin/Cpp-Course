#include <iostream>

using namespace std;

// base class shape
class Shape{
protected:
    int height;
    int width;
public:
    void setHeight(int h){
        height = h;
    }
    void setWidth(int w){
        width = w;
    }
};

// base class paintCost
class PaintCost{
public:
    int getCost(int area){
        return area * 70;
    }
};

// derived class rectangle
class Rectangle: public Shape, public PaintCost{
public:
    int getArea(){
        return height * width;
    }
};

int main(){
    Rectangle rect;
    
    rect.setHeight(10);
    rect.setWidth(5);
    
    cout << "Total area: " << rect.getArea() << endl;
    cout << "Total cost: " << rect.getCost(rect.getArea()) << endl;
    
    return 0;
}