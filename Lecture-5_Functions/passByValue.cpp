#include<iostream>

using namespace std;

int minOfTwo(int a, int b){
    if(a > b){
        return b;
    }else{
        return a;
    }
}

int main(){

    int a = 3;
    int b = 5;
    cout << "Min of : " << minOfTwo(a, b) << endl; // this is teh example of copied memory which is only used by minOfTwo function.

    cout << a << " " << b << endl; // this is the main memory where the actual data is stored.

    return 0;
}