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
    cout << "Min of : " << minOfTwo(3, 5) << endl;
    return 0;
}