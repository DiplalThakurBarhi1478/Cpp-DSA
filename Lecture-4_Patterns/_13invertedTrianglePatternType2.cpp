#include<iostream>

using namespace std;

int main(){

    int n = 4;

    for(int i{0}; i < n; ++i){            
        
        for(int k{0}; k < i + 1; k++){        // first row loops for space
            cout << " ";  
        }

        for(int j{n - i}; j > 0; --j){        // second row loops for number
            cout << i + 1;                 
        }
    cout << endl;
    }
}
/* 
 1111
  222
   33
    4 
    */