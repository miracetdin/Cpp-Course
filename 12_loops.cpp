#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> num {10, 20, 30, 40, 50};
    
    // for loop
    // i = index
    for(int i {0}; i<num.size(); i++){
        cout << num.at(i) << endl;
    }
    
    // i = number
    // for(auto i : num){
    for(int i : num){
        cout << i << endl;
    }
    
    for(auto c: "Mirac"){
        cout << c << endl;
    }
    
    // while loop
    bool done {false};
    int n;
    
    cout << "Please enter an integer between 1 and 5: ";
    cin >> n;
    
    while(!done){
        if(n>=1 || n<=5){
            cout << "Out of range! Try again." << endl;
        }
        else{
            cout << "Thanks!" << endl;
            done = true;
        }
    }
    
    /* do while loop
     * 
     * do{
     *     cout << "Please enter an integer between 1 and 5: ";
     *     cin >> n;
     *     if(n>=1 || n<=5){
     *          cout << "Out of range! Try again." << endl;
     *     }
     *     else{
     *          cout << "Thanks!" << endl;
     *          done = true;
     *     }
     * }while(!done)
     * 
     * 
     */
     
     
     // continue and break
     
     for(int i=0; i<15; i++){
         if(i==5){
             continue;
         }
         if(i==10){
             break;
         }
         cout << i << endl;
     }
     
     
     // nested loops
     
     for(int i=0; i<10; i++){
         for(int j=0; j<10; j++){
             cout << i << "*" << j << " = " << i*j << endl; 
         }
         cout << "-----------------------" << endl;
     }
    
    return 0;
}