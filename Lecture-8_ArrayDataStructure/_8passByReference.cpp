#include<iostream>

using namespace std;

void changeArr( int arr[], int size){
    // user defined function 
    for(int i{0}; i < size; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){

    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(int);
    // initializing the array and the finding the size of the memory

    changeArr(arr, size);
    // calling the function using pass by reference meaning passing the memory address of hte first element

    cout << "In main function" << endl;

    for(int i{0}; i < size; i++)
    // looping into hte array again, here we see the change made by the function 
    {
        cout << arr[i] << " ";
    }


    return 0;
}