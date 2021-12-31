// comment line
/***************  
 * Comments
 * 
 * Miracetdin Yıldız
 **************/
 
// preprocessors
// #include "filename"
#include <iostream>

/* name spaces
 * 
 * std: standart namespaces (in iostream library)
 * using std::cout
 * using std::cin
 */
using namespace std;    // use entire std 



// main function returns int to OS
// return 0: no problem
// return others: there is a problem in this program
int main() {
    
    //-----------------------------------------------------------------
    // cout: print on screen
    // << : insertion
    // endl: end line = \n: new line
    cout <<"Hello World!"<< endl;
    
    cout << "Hello" << "World" << "\n";     // HelloWorld and new line
    //-----------------------------------------------------------------
    // define an integer and read the nnumber entered by user/programmer
    int num1;
    
    cout << "Please enter an integer: ";
    cin >> num1;
    cout << "You entered " << num1 << endl;
    //-----------------------------------------------------------------
    int num2;
    
    cout << "Please enter first integer: ";
    cin >> num1;
    cout << "Please enter second integer: ";
    cin >> num2;
    cout << "You entered these number: " << num1 << " and " << num2 << endl;
    //-----------------------------------------------------------------
    cout << "Please enter two integers: ";
    cin >> num1 >> num2;
    cout << "You entered these number: " << num1 << " and " << num2 << endl;
    //-----------------------------------------------------------------
    double num3;
    cout << "Please enter a double: ";
    cin >> num3;
    cout << "You entered: " << num3 << endl;
    //-----------------------------------------------------------------
    // buffer:10.5 --> num1:10 and num3:.5 (0.5)
    cout << "Please enter an integer: ";
    cin >> num1;
    cout << "Please enter a double: ";
    cin >> num3;
    cout << "integer: " << num1 << " and double: " << num3 << endl;
    
    return 0;
}