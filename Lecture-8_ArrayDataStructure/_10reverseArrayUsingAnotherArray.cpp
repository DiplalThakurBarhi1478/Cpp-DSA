#include<iostream>

using namespace std;

int main(){
    int arr[5] = {9, 4, 7, 3, 8};

    int revArr[5];

    int size = sizeof(arr)/sizeof(int);

    for(int i{0}; i < size; i++){
        revArr[size - i - 1] = arr[i];
    }

    for(int i{0}; i < size; i++){
        cout << revArr[i] << " ";
    }

    return 0;
}