#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int* ptr = arr;

    // Adding 
    // note we cannot add pointers  => means we cannot add addresses
    cout << *(ptr + 1) << endl; // 2
    cout << *(ptr + 2) << endl; // 3
    cout << *(ptr + 3) << endl; // 4
    cout << *(ptr + 4) << endl; // 5
    cout << *(ptr + 5) << endl; // 6


    // subtract pointer
    // yes we can subtract pointer => means we can add addresses
    auto ptr1 = ptr + 1; // add 1 bytes
    auto ptr2 = ptr + 5; // add 5 bytes

    cout << ptr2 - ptr1 << endl; // 4 bytes

    return 0;
}