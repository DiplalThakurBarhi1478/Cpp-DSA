#include<iostream>

using namespace std;

int main(){

    int n = 4;
    // Nested loops are very useful for DSA
    

    for(int i{0}; i < n; ++i){  
        for(int j{0}; j < n - i - 1 ; j++){  // spaces
            cout << " ";
        }     
        cout << "*";                         // a star
        
        for(int j{0}; j < i ; j++){          // spaces
            cout << " ";
        }

        for(int j{0}; j < i ; j++){          // spaces
            cout << " ";
        }
        cout << "*";
                            
    cout << endl;
    }

        for(int i{0}; i < n - 1 ; ++i){ 

            for(int j{0} ; j <= i; j++){        // spaces
                cout << " ";
            }     
            cout << "*";                         // a star

            
            for(int j{n - i - 2}; j > 0 ; j--){          // spaces
                cout << " ";
            }

            for(int j{n - i - 2}; j > 0 ; j--){          // spaces
                cout << " ";
            }
            cout << "*";
                            
    cout << endl;
    }


}