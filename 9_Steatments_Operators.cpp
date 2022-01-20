#include <iostream>

using namespace std;

int main(){
    
    /*
     * +, -, *, / math op
     * % mod op
     * 
     */
     
     /*
      * Assignment op
      * a=a+b is same as a+=b
      * +=, -=, *=, /=, %=
      */
    
    const double usd_per_eur {1.19};
    
    cout << "Welcome to EURO to USD Converter" << endl;
    cout << "Enter the value of Euro:";
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    
    dollars = euros * usd_per_eur;
    
    cout << euros << " Euros is equivalent to " << dollars << " Dollars. " << endl;
    
    
    // increment
    // postfix: value++
    // prefix: ++value
    // decrement: --   :    value--
    
    int value = 10;
    int result = 0;
    
    result = value++;
    cout << result << endl;     // 10
    cout << value << endl;      // 11
    
    
    result = ++value;
    cout << result << endl;     // 11
    cout << value << endl;      // 11
    
    return 0;
    
}