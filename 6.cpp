#include <iostream>
#include <climits>  // is contained <cfloat> 

using namespace std;

int main() {
    /*
     * sizeof informations
     */
    cout << "SIZEOF() FUNCTION" << endl;
    
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "(signed) short (int): " << sizeof(short) << " bytes." << endl;
    cout << "(signed) int: " << sizeof(int) << " bytes." << endl;
    cout << "(signed) long (int): " << sizeof(long) << " bytes." << endl;
    cout << "unsigned short (int): " << sizeof(unsigned short) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "unsigned long (int): " << sizeof(unsigned long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    
    cout << "========================================================\n";
    
    cout << "MINIMUM VALUES" << endl;
    
    cout << "char: " << CHAR_MIN << endl;
    cout << "(signed) short (int): " << SHRT_MIN << endl;
    cout << "(signed) int: " << INT_MIN << endl;
    cout << "(signed) long (int): " << LONG_MIN << endl;
    
    cout << "long long: " << LLONG_MIN << endl;
    
    cout << "========================================================\n";
    
    cout << "MAXIMUM VALUES" << endl;
    
    cout << "char: " << CHAR_MAX << endl;
    cout << "(signed) short (int): " << SHRT_MAX<< endl;
    cout << "(signed) int: " << INT_MAX << endl;
    cout << "(signed) long (int): " << LONG_MAX << endl;
    
    cout << "long long: " << LLONG_MAX << endl;
    
    cout << "========================================================\n";
    
    int age {22};
    cout << "size of age: " << sizeof(age) << " bytes" << endl;     // or
    cout << "size of age: " << sizeof age << " bytes" << endl;
    
    return 0;
}