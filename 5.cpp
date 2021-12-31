#include <iostream>

using namespace std;

// global variable
int age = 18;

int main() {
    
    // local variable
    int age = 16;

//   CTRL + LSHIFT + 7 : put in comment line - undo
    
//   compiler sees the age below; 
//   firstly searches the variable "age" decleration in this scope
//   if it is not in this scope, it has to be global variable
//   otherwise there is a compile error
     cout << age << endl;
    
    // ---------------------------------------------------------
    // char initial
    // char ch1 = 'M';
    char ch1 {'M'};
    cout << ch1 << endl;
    // ---------------------------------------------------------
    unsigned short int exam_score = 55;
    cout << "My exam score is " << exam_score << "." << endl;
    // ---------------------------------------------------------
    long people_in_florida = 2061000;
    cout << "There are about " << people_in_florida << " people in Florida." << endl;
    // ---------------------------------------------------------
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on Earth." << endl;
    // long people_on_earth {7'600'000'000}; --> wrong variable type --> have to use long long (int)
    // long people_on_earth = 7'600'000'000; --> overflow - compile time error
    // so should use curly brackets initialization
    // ---------------------------------------------------------
    long long distance_of_alpha_centauri {9'461'000'000'000};
    cout << "THe distance of ALpha Centauri is " << distance_of_alpha_centauri << " kilometers." << endl;
    // ---------------------------------------------------------
    float car_payment {401.23};
    cout << "My car payment is $" << car_payment << "." << endl;
    // ---------------------------------------------------------
    // double stores smaller numbers than the numbers stored by float
    double pi {3.14159};
    cout << "PI: " << pi << endl;
    // ---------------------------------------------------------
    long double large_amount {2.7e120};
    cout << large_amount << " is a big number." << endl;
    // ---------------------------------------------------------
    bool game_over {true};
    cout << "Game over: " << game_over << endl;
    // ---------------------------------------------------------
    // overflow example
    short n1 {100};
    short n2 {30000};
    short product {n1 * n2};
    cout << "N1:" << n1 << " and N2:" << n2 << " Product:" << product << endl;
    
    return 0;
}