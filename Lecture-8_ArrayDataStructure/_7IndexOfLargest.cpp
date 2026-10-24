#include<iostream>

using namespace std;

int main(){

    int arr2[] = {54, 32, 98, 13, 34};
    // declaration and initialization


    int largest = arr2[0];

    for(int i{0}; i < sizeof(arr2)/sizeof(int); i++){
        if(arr2[i] >  largest){
            largest = arr2[i];
        }
    }

    int position;

    for(int i{0}; i < sizeof(arr2)/sizeof(int); i++){
        if(largest == arr2[i]){
            position = i;
        }
    }

    cout << "The index of the the largest number is : " << position << endl;

    return 0;
}