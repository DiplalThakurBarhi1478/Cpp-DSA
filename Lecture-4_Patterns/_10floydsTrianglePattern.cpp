#include<iostream>

using namespace std;

int main(){

    int n = 4;
    int ch = 1;

    for(int i{0}; i < n; ++i){                
        for(int j{0}; j < i + 1; ++j){        
            cout << ch << " ";
            ch = ch + 1;                    // concept is ch increasing but not reseting if new row is getting printed. 
        }
        
    cout << endl;
    }
}
/* 
1 
2 3 
4 5 6 
7 8 9 10 
 */