#include <iostream>
#include <vector>

using namespace std;

double calculateAvg(int*, int);

int main() {
    
    int num = 5;
    
    cout << "num = " << num << endl;
    cout << "size = " << sizeof num << endl;
    cout << "address = " << &num << endl;
    
    int* ptr {nullptr};
    
    cout << "ptr = " << ptr << endl;
    
    ptr = &num;
    cout << "ptr = " << ptr << " and adr of num = " << &num << endl;
    // ptr: pointer
    // *ptr: referencing
    cout << "*ptr = " << *ptr << " and num = " << num << endl;
    
    /*
     * 108H
     * 106H  100H   (ptr) 
     * 104H
     * 100H  5  (num)
     */
     
     //------------------------------------------------------
     // Dynamic Memory Allocation
     cout << "-----------------------------" << endl;
     
     int* int_ptr;
     int_ptr = new int;
     cout << "*int_ptr = " << *int_ptr << " and int_ptr = " << int_ptr << endl;
     cout << "Enter size of int_ptr = ";
     int size;
     cin >> size;
     int_ptr = new int[size];
     cout << "*int_ptr = " << *int_ptr << " and int_ptr = " << int_ptr << " and size = " << size << endl;
     
     cout << "Array - int_ptr[i]" << endl;
     for(int i=0; i<size; i++){
         cout << int_ptr[i] << " ";
     }
     cout << endl;
     
     cout << "Pointer - *int_ptr+i" << endl;
     for(int i=0; i<size; i++){
         cout << *(int_ptr+i) << " ";
     }
     cout << endl;
    
    string s1 = "Mirac";
    string s2 = "Mirac";
    
    string* p1 = &s1;
    string* p2 = &s2;
    string* p3 = &s1;
    
    cout << (p1 == p2) << endl;
    cout << (p1 == p3) << endl;
    
    //------------------------------------------------------
    
    int *array;
    cout << "Enter size: ";
    cin >> size;
    array = new int[size];
    
    
    for(int i=0; i<size; i++){
        cout << "Enter " << i+1 << ". element = ";
        cin >> array[i];
    }
    
    cout << "Avarage = " << calculateAvg(array, size) << endl;
    
    vector <string> names {"Ali", "Ahmet", "Ayşe"};
    
    for(auto str: names){
        str = "Mehmet";
    }
    
    for(auto s: names){
        cout << s << " ";
    }
    cout << endl;
    
    for(auto &str: names){
        str = "Mehmet";
    }
    
    for(auto s: names){
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}

double calculateAvg(int* array, int size){
    int total = 0;
    for(int i=0; i<size; i++){
        total += *(array+i);
    }
    double avg = static_cast<double> (total)/size;
    return avg;
}