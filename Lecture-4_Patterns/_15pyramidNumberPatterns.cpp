#include<iostream>

using namespace std;

int main(){

    int n = 5;

    for(int i{0}; i < n; ++i){                
        for(int j{n - i - 1}; j > 0; j--){    // spaces     
            cout << " ";                  
        }

        int ch1 = 1;
        for(int k{0}; k < i + 1; k++){       // first triangle
            cout << ch1;
            ch1 = ch1 + 1;
        }
       
        for(int l{i}; l > 0 ; l--){          // second triangle
            int ch2 = 1;
            ch2 = ch2 + l;
            cout << ch2 - 1;
        }
        
    cout << endl;
    }
}
/* 

    1
   121
  12321
 1234321
123454321 

*/