#include<iostream>

using namespace std;

int main(){

    int n = 5;
    // Nested loops are very useful for DSA
    

    for(int i{0}; i < n; ++i){                
        for(int j{n - i - 1}; j > 0; j--){    // spaces     
            cout << " ";                  
        }

        char ch = 'A';
        for(int k{0}; k < i + 1; k++){       // first triangle
            cout << ch;
            ch = ch + 1;
        }
    
        for(int l{i}; l > 0 ; --l){          // second triangle
            char ch1 = 'A';
            ch1 = ch1 + l - 1;
            cout << ch1;
            
        }
        
    cout << endl;
    }
}

/* 
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA 

*/