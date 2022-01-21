#include <iostream>
#include <cstring>      // for c style string functions
#include <cctype>       // for char-based functions
#include <string>       // for cpp style string functions

using namespace std;

//This is a template
int main() {
    
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter your last name: ";
    cin >> lastName;
    
    strcpy(fullName, firstName);;
    strcat(fullName, " ");
    strcat(fullName, lastName);
    
    cout << "Welcome " << fullName << endl;
    cout << "Your first name has " << strlen(firstName) << " characters" << endl;
    
//    cout << "Please enter your full name: ";
//    cin.getline(fullName, 50);
//    cout << "Your full name is: " << fullName;

    // strcmp = string conmpare (if these are equals the function returns 0)

    //----------------------------------------------------
    // cpp strings
    
    string s1;                  // empty
    string s2 {"Mirac"};        // Mirac
    string s3 {s2};             // Mirac
    string s4 {"Mirac", 3};     // Mir
    string s5 {s3, 1, 3};       // ira
    string s6 (3, 'Y');         // YYY
    
    string part1 {"Cpp"};
    string part2 {"is pwerful"};
    
    string sentence;
    sentence = part1 + " " + part2 + " language";
    // sentence = "Cpp " + "is powerful";    //illegal
    cout << s2[0] << endl;
    cout << s2.at(1) << endl;

    for(char c : s2){
        cout << c << endl;
    }
    
    cout << s2.substr(0, 2);        // Mir
    cout << s2.find("rac");         // 2        // string::npos -> no position/not found
    cout << s2.erase(0, 2);         // ac
    s2.clear(); 
    
    // cin    // only accepts up to first space
    // getline(cin, s1);    // until \n
    // getline(cin, s1, 'x');   //until x
    
    // size_t: unsigned integer type
    
    return 0;
}