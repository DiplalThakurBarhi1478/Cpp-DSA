#include<iostream>

using namespace std;

int swapingMinMax(int arr[], int size){

    int smallest = arr[0];
    int largest = arr[0];

    for(int i{0}; i < size; i++){ 
        // finding the smallest and largest
        if(smallest > arr[i]){
            smallest = arr[i];
        }

        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    int position_of_Min;
    int position_of_Max;


    for(int i{0}; i < size; i++){ 
        // finding the position of the smallest and largest
        if(arr[i] == smallest){
            position_of_Min = i;
        }

        if(arr[i] == largest){
            position_of_Max = i;
        }
    }

    swap(arr[position_of_Min], arr[position_of_Max]); 
    // swapping the smallest and largest element
}


int main(){

    int arr[] = {4, 34, 2, 9, 10, 23, 56};

    int size = sizeof(arr)/sizeof(int);

    swapingMinMax(arr, size);

    for(int i{0}; i < size; i++){ 
        // printing the final result
        cout << arr[i] << " ";
    }
   

    return 0;
}