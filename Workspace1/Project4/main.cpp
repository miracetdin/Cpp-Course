#include <iostream>

using namespace std;

int main() {
    // integer - double/float - string (character arrays)
    //int num1;
    //double num2;
    // initialization
    //int num3 {22};
    //int num3 = 22;
    //string str;
    
    
    cout << "Please enter the width of the room: ";
    int room_width;
    cin >> room_width;
    
    cout << "Please enter the length of the room: ";
    int room_length;
    cin >> room_length;
    
    cout << "The area of the room is " << room_width * room_length << " square meter" << endl;
    
    return 0;
}