#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    // increment and decrement
    // addresses
    
    /*    // ERROR
    cout << arr << endl; 
    arr++;
    cout << arr << endl; 
    */

    int* ptr = arr;
    cout << ptr << endl;
    ptr++;  
    // add four bytes
    cout << ptr << endl;
    ptr--;
    // subtract four bytes
    cout << ptr << endl;


    return 0;
}