#include<iostream>

using namespace std;

int main(){

    int n = 4;

    for(int i{0}; i < n; ++i){                
        for(int j{n - i}; j > 0; --j){        
            cout << i + 1 << " ";                  
        }
        
    cout << endl;
    }
}
/* 
1 1 1 1 
2 2 2 
3 3 
4  */