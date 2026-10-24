#include<iostream>

using namespace std;

int main(){

    int n = 4;

    char ch = 'A';

    for(int i{0}; i < n; ++i){               
        for(int j{0}; j < i + 1; ++j){
            cout << ch << " ";
        }
    ch = ch + 1;    // ch should be inside outer loop and outside inside loop because we want same ch inside loop and increase one time only
    cout << endl;
    }
}
/* 
A 
B B 
C C C 
D D D D 
*/