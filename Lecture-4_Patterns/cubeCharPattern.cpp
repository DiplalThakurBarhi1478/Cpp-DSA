#include<iostream>

using namespace std;

int main(){

    int n = 3;

    char ch = 'A';                     // initializing outside the outer loop and then its value only increases without restarting 

    for(int i{0}; i < n; ++i){
                                    // inside outer loop the value would reset again but we do not want                   
        for(int j{0}; j < n; ++j){
            cout << ch << " ";
            ch = ch + 1;

        }
    cout << endl;
    }
}
/* 
A B C 
D E F 
G H I 
 */