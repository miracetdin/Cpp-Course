#include <iostream>

using namespace std;

int main() {
    int num1 {}, num2 {}, num3{};
    int total {};
    double avarage {0.0};
    
    cout << "Enter three values: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    
    total = num1 + num2 + num3;
    
    avarage = static_cast<double>(total) / 3;
    
    cout << "Avarage is: " << avarage << endl;
    
    return 0;
}