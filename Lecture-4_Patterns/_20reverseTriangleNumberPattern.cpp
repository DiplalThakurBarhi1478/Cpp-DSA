#include<iostream>

using namespace std;

int main(){

    int n = 4;

    for(int i{0}; i < n; ++i){                 // row is increasing 
        for(int j{i + 1}; j > 0 ; --j){        // for each column value is decreasing 
            cout << j  << " ";
        }
        
    cout << endl;
    }
}
/* 
1 
2 1 
3 2 1 
4 3 2 1 
*/