#include <iostream>

using namespace std;

int main(){
    
    
    // if else - nested if else
    
    int length, width, height;
    const int max = 10;
    const int tier1 = 100;
    const int tier2 = 500;
    const double t1_extra = 0.1;
    const double t2_extra = 0.25;
    const double base_cost = 2.5;
    double cost = base_cost;
    
    cout << "Enter package length, width and height:";
    cin >> length;
    cin >> width; 
    cin >> height;
    
    if(length > max || width > max || height > max){
        cout << "Package rejected!" << endl;
    }
    else{
        int volume = length * width * height;
        
        if(volume > tier2){
            cost += cost*t2_extra;
        }
        else if(volume > tier1){
            cost += cost*t1_extra;
        }
     
        cout << "Cost: " << cost << endl;
    }
    
    // -----------------------------------------------------------
    
    // switch case
    char expect;
    
    cout << "Enter your expectation of letter grade: ";
    cin >> expect;
    
    switch(expect){
        case 'a':
        case 'A':
            cout << "You need a 90 or above " << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79" << endl;
            break;
        case 'd':
        case 'D':
            cout << "You need 60-69" << endl;
            break;
        case 'e':
        case 'E':
            cout << "You need 50-59" << endl;
            break;
        case 'f':
        case 'F':
            cout << "You need 40-49" << endl;
            break;
        default:
            cout << "You failed!" << endl;
    }
    
    
    // -----------------------------------------------------------
    
    // enumaration
    
    enum Direction{
      left, right, up, down  
    };
    
    Direction dir (left);
    
    cout << dir << endl;
    
    // -----------------------------------------------------------
    
    // conditional op - ternary op
    // ((operation) ? expression1 : expression2)
    
    cout << "Length is " << ((length % 2 == 0) ? "even" : "odd") << endl;
    
    return 0;
}