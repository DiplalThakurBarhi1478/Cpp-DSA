#include<iostream>

using namespace std;

int main(){
    int num;
    cin >> num;


    int rem;
    int sum = 0;
    int place = 1;

    while(num != 0){
        rem = num % 2;
        sum = rem * place + sum;
        place = place * 10;
        num = num / 2;
    }

    cout << sum;
}