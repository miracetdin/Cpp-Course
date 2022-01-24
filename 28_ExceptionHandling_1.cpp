#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
 
    int miles;
    int gallons;
    double miles_per_gallons;
    
    cout << "Enter miles: ";
    cin >> miles;
    
    cout << "Enter gallons: ";
    cin >> gallons;
    
//    if(gallons != 0){
//        miles_per_gallons = static_cast<double>(miles)/gallons;
//        cout << "miles per gallons: " << miles_per_gallons << endl;
//    }
//    else{
//        cout << "Sorry can't divide by zero!" << endl; 
//   }

     try{
         if(gallons == 0){
             throw 0;
         }
         miles_per_gallons = static_cast<double>(miles)/gallons;
         cout << "miles per gallons: " << miles_per_gallons << endl;
     }
     catch(int &ex){
         cout << "Sorry can't divide by zero!" << endl;    
     }
        
	return 0;
}
