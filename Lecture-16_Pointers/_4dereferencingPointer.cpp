#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int* ptr = &a;

    // Dereferencing
    cout << *(&a) << endl;
    cout <<  *ptr << endl;

    return 0;
}