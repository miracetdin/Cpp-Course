#include <iostream>
#include <memory>

using namespace std;

class Test{
private:
    int data;
public:
    Test() : data{0}{
        cout << "Test constructor (" << data << ")" << endl;
    }
    Test(int data) : data {data}{
        cout << "Test constructor (" << data << ")" << endl;
    }
    int getData() const{
        return data;
    }
    ~Test(){
        cout << "Test destrcutor (" << data << ")" << endl;
    }
};

int main(){
    
    unique_ptr<Test> t1 {new Test{100}};
    unique_ptr<Test> t2 = make_unique<Test>(100);

    return 0;
}