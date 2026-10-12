#include<iostream>

using namespace std;

int sumOfDigits(int n){
    int rem;
    static int sum = 0;

    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    return sum;
}

int main(){
    int x = 12345323;
    cout << sumOfDigits(x);
    return 0;
}