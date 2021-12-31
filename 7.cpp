#include <iostream>

using namespace std;

int main() {
    cout << "*** Welcome to Frank's Carpet Cleaning Service ***" << endl;
    
    cout << "\nHow many rooms would you like cleaned? "; 
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    // constant variable makes a program more readable and more modifiable
    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    
    cout << "\nEstimate for Caropet Cleaning Service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price for room: " << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate valid for " << estimate_expiry << " days." << endl;
    
    /*
     * Search -> Fİnd and Replace -> Replace => 30 ---> 32.5 (chamge the value)
     */
    
    cout << endl;
    return 0;
}