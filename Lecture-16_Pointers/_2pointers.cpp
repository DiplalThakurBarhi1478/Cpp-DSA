#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int* ptr = &a; // pointers stores the memory
    
    cout << "Pointer stores the address  : " << ptr << endl;
    cout << "Address of a : " << &a << endl;

    return 0;
}