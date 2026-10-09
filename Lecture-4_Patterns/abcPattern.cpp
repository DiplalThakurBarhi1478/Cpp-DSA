#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n = 4;

    // Method 1
    vector<char> arr = {'A', 'B', 'C', 'D'};

    for(int i{0}; i < n; ++i){
        for(int j{0}; j < n; ++j){
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Method 2
    for(int p{0}; p < n; ++p){
        char ch = 'A';
        for(int q{0}; q < n; ++q){
            cout << ch << " ";
            ch = ch + 1;        // ASCII // Type conversion
        }
        cout << endl;
    }
}
/* 
A B C D 
A B C D 
A B C D 
A B C D  

*/