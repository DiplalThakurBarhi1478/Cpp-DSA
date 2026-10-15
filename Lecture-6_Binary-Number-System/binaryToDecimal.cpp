#include<iostream>

using namespace std;

int binaryToDecimal(int num){

    int rem;
    int sum = 0;
    int place = 1;

    while(num != 0){
        rem = num % 2;           // it gives us reminder
        sum = rem * place + sum; // remainder is multiplied and added to the sum
        place = place * 2;       // this is the number by which the remainder will be multiplied.
        num = num / 10;          // removing the last digit of the binary number system.
    }

    cout << sum;

}

int main(){
    int num;
    cin >> num;

    binaryToDecimal(num);

    return 0;

}