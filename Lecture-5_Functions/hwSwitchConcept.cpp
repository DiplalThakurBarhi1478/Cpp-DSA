#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;


    switch(n){
        case 1 : cout << "hello";
        break;

        case 2 : cout << "World";
        break;

        case 3 : cout <<  "I am Diplal";
        break;

        default: cout << "I am at Home";
        break;
    }

    return 0;
}