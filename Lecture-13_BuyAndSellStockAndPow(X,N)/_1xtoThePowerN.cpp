#include<iostream>
using namespace std;

// Binary Exponentiation 

double nPowerOfX(double x, int n){

    long long power = n;
    double result = 1;

    if(power < 0){         // checking if power is negative
        power = -power;
    }

    while(power > 0){       // checking if the power is 0 and looping until we get 0
        if(power %2 == 1){
        result *= x;
    }

    x *= x;                 // if bit is 0 then we make x as value
    power >>= 1;

    }
    
    if(n < 0){                 // if power is negative then we reverse the result 
        result = 1/result;
    }

    return result;
}

int main(){

    double x;
    int n;

    cin >> x;
    cin >> n;

    double result = nPowerOfX(x, n);

    cout << "The result is : " << result << endl;

    return 0;

}