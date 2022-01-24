#include <iostream>
#include <string>

using namespace std;

double calculateMG(int miles, int gallons){
    if(gallons == 0){
        throw 0;
    }
    else if(miles<0 || gallons<0){
        throw string("Negative value error");
    }
    return static_cast<double>(miles)/gallons;
}

int main(int argc, char **argv)
{
    
    int miles;
    int gallons;
    double miles_per_gallons;
    
    cout << "Enter miles: ";
    cin >> miles;
    
    cout << "Enter gallons: ";
    cin >> gallons;
    
    try{
        miles_per_gallons = calculateMG(miles, gallons);
        cout << "miles per gallons: " << miles_per_gallons << endl;
    }
    catch(int &ex){
        cerr << "Tried divide by zero" << endl;
    }
    catch(string &ex){
        cerr << ex << endl;
    }
    
	return 0;
}
