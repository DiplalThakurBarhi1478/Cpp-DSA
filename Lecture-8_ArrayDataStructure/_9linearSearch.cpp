#include<iostream>

using namespace std;

int linearSearch(int arr[], int target, int size){ 
    // creating user defined function with three arguments
    for(int i{0}; i < size; i++){
        // looping upto the size of array
        if(arr[i] == target){
            // checking if the target is in the array
            return i;
            // returning the index if there is the target
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 6, 8, 3, 7};
    int target = 80;
    int size = sizeof(arr)/sizeof(int);

    cout << linearSearch(arr, target, size) << endl; // calling hte function and passing the arguments to the function.

    return 0;
}