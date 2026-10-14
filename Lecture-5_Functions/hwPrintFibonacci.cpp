#include<iostream>

using namespace std;

int printFibonacci(int a){
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm;

    for(int i{1}; i <= a; ++i){
        cout << firstTerm;

        if(i < a){
            cout << ", ";
        }

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        
    }
}

int main(){
    int n;
    cin >> n;

    printFibonacci(n);

    return 0;
}