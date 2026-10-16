#include<iostream>

using namespace std;

int main(){
    int a;
    cout << "Input a : ";
    cin >> a;

    if(a > 0 && (a & (a - 1)) == 0){
        cout << "Yes, a is the power of 2";
    }

    return 0;
}

// Lesson
// Every power of 2, ihas only one 1 bit all others are 0.
// If we subtract 1, then all of them convert to 1 mostly. 