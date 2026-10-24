#include<iostream>
using namespace std;

// Two pointer Approach

void reverseArray(int arr[], int size){
    // loop while the start is less than the end.
    int start = 0;
    int end = size - 1;

    // swap the start and the end
    while(start < end){ 
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    // reversing the elements inside the same array using two pointer approach
    
    int arr[5] = {9, 4, 7, 3, 8};

    int size = sizeof(arr)/sizeof(int);

    reverseArray(arr, size);
    // calling the function to reverse the elements of the array
    
    // printing all the elements of the array.
    for(int i{0}; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}