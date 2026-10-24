#include<iostream>
using namespace std;                         // great question 

int main(){

    int n = 4;

    for(int i{0}; i < n; ++i){ 
      // row is increasing 
      
        for(int j{i + 1}; j > 0 ; --j){ 
            char ch = 'A';
            ch = ch + j - 1;                 // for each column value is decreasing 
            cout << ch  << " ";
            
        }
        
    cout << endl;
    }
}
/* 
A 
B A 
C B A 
D C B A  */