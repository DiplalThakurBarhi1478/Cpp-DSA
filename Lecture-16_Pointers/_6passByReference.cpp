#include<iostream>

using namespace std;

void changeAusingPointer(int* A){     // pointers
    *(A) = 10;
}

void changeAusingReferencing(int &B){ // referencing
    B = 40;
}

int main(){
    int a = 5;
    int b = 20;

    changeAusingPointer(&a);  // pass by reference
    changeAusingReferencing(b); // pass by value

    cout << a << endl;
    cout << b << endl;

    return 0;
}