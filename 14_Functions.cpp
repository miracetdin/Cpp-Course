#include <iostream>
#include <cmath>
#include <cstdlib>  // required for rand()
#include <ctime>    // requirefd for time()
#include <vector>

using namespace std;

// ----------------------------------------
// function prototypes
double calArea(double);
void pass_by_value(string);
void pass_by_value(int);
void pass_by_reference(int &);
// default arguement/parameter is defined at prototype
double calculate_price(double, double taxe_rate = 0.18);
// overloading
void add(int a, int b);
void add(double a, double b);
void add(string a, string b);
// array parameter
void print_arr(int array[], size_t size);
int fibonacci(int);

// ----------------------------------------
// main function
int main() {
    
    cout << "square rrot of 400 = " <<  sqrt(400) << endl;
    cout << "2^3 = " <<  pow(2, 3) << endl;
    cout << "cubed root of 900 = " << cbrt(900) << endl;
    cout << "sin30 = " << sin(30) << endl;
    cout << "cos30 = " << cos(30) << endl;
    cout << "ceil 30.5" << ceil(30.5) << endl;
    cout << "floor 30.5" << floor(30.5) << endl;
    cout << "round 30.5" << round(30.5) << endl;
    
    
    // global funcitons and variables --> entire program
    // local funstions and variables --> block/scope
    
    srand(time(nullptr));
    int random = rand() % 10;
    cout << "Random number is: " << random << endl;
    
    // user defined functions
    cout << "Enter radius: ";
    int r;
    cin >> r;
    // function call
    cout << "The area is: " << calArea(r) << endl;
    
    // pass by value & pass by reference
    string name = "Mirac";
    cout << "The name is: " << name << endl;
    pass_by_value(name);
    cout << "Pass by value is: " << name << endl;
    
    cout << "Enter cost: ";
    int cost;
    cin >> cost;
    cout << "Price (with taxes rate: %18) = " << calculate_price(cost) << endl;
    
    add(1, 2);
    add(1.1, 2.2);
    add("Merhaba", "Dünya");
    

    int int_arr[] {10, 20, 30, 40, 50};
    int n = 5;
    print_arr(int_arr, n);
    
    int N = 100;
    cout << "N: " << N << endl;
    pass_by_value(N);
    cout << "Pass by value: " << N << endl; 
    pass_by_reference(N);
    cout << "Pass by reference: " << N << endl;

    cout << "Enter an integer:";
    cin >> n;
    cout << "Fibonacci: ";
    for(int i=0; i<n; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    
    return 0;
}

// ----------------------------------------
// function 
double calArea(double r){
    const double pi = 3.1415;
    double area = pi * (pow(r, 2));
    return area;
}

// ----------------------------------------
// ------ pass by value or reference ------
void pass_by_value(string s){
    s = "changed";
}
// N adr: 100H
// n adr: 104H
// compiler set value at another address (n adr)
void pass_by_value(int n){
    n = 111;
}
// N adr: 100H
// n adr: 100H
// compiler set value at the address (N adr)
void pass_by_reference(int &n){
    n = 111;;
}

// ----------------------------------------
// taxe_type is default arguement
double calculate_price(double cost, double taxe_rate){
    double price = cost;
    price += cost*taxe_rate;
    return price;
}

// ----------------------------------------
// overloading

void add(int a, int b){
    cout << "Result = " << a+b << endl;
}

void add(double a, double b){
    cout << "Result = " << a+b << endl;
}

void add(string a, string b){
    cout << "Result = " << a+b << endl;
}

// ----------------------------------------
// array as parameter
void print_arr(int array[], size_t size){
    for(size_t i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// ----------------------------------------
// recursive functions
int fibonacci(int n){
    if(n<=1){
        return n;   // initial condition
    }
    else{
        return fibonacci(n-2) + fibonacci(n-1);     // recursion
    }
}