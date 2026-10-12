#include<iostream>

using namespace std;

int factorial(int n){
    int multiple = 1;
    for(int i{1}; i <=n; i++){
        multiple = multiple * i;
    }
    return multiple;
}

int main(){

    cout << "Factorial of N : " << factorial(5) << endl;
    return 0;
}