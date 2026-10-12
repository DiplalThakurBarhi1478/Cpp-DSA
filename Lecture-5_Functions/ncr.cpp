#include<iostream>

using namespace std;

int nCr(int n, int r){
    int nMultiple = 1;
    for(int i{1}; i <= n; i++){
        nMultiple = nMultiple * i;
    }

    int rMultiple = 1;
    for(int i{1}; i <= r; i++){
        rMultiple = rMultiple * i;
    }

    int nMinusrMultiple = 1;
    for(int i{1}; i <= (n-r); i++){
        nMinusrMultiple = nMinusrMultiple * i;
    }

    return nMultiple/(rMultiple * nMinusrMultiple);

}

int main(){

    int n = 6;
    int r = 3;

    cout << "Value of nCr : " << nCr(n, r) << endl;
    return 0;
}