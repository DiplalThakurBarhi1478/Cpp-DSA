#include<iostream>

using namespace std;

int main(){

    int arr2[5] = {54, 32, 98, 13, 34};
    // declaration and initialization
// Method 1 : --------------------------------------------------------------------------

    for(int i{0}; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    {
        for(int j{i + 1}; j < sizeof(arr2)/sizeof(arr2[0]); j++){
            int temp;
            if(arr2[i] < arr2[j]){
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        } 
    }

    cout << "The largest number of the array is : " << arr2[0] << endl;


// Method 2: ---------------------------------------------------------------------------
    int largest = arr2[0];

    for(int i{0}; i < sizeof(arr2)/sizeof(int); i++){
        if(arr2[i] > largest){
            largest = arr2[i];
        }
    }

    cout << "The largest number of the array is : " << largest << endl;
    
    return 0;
}