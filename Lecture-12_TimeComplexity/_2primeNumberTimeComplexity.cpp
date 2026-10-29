#include<iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            cout << "It is not Prime Number." << endl;
            break;
        }
    }
}


// this program is linear but it will not run upto num times
// i = 2 to sqrt(n)
// Time complexity is O(sqrt(n))

// Comparison
// O(sqrt(n)) is better than O(n)
// O(sqrt(n)) is not better than O(logn)