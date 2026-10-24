#include<iostream>

using namespace std;

int main(){

    int arr2[] = {54, 32, 98, 13, 34};
    // declaration and initialization

    
// Method 1 : --------------------------------------------------------------------------

    for(int i{0}; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    {
        for(int j{i + 1}; j < sizeof(arr2)/sizeof(arr2[0]); j++){
            int temp;
            if(arr2[i] > arr2[j]){
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        } 
    }
    cout << "The smallest of the array is : " << arr2[0] << endl;

    cout << endl;

// Method 2 : ---------------------------------------------------------------------------------
    int smallest = arr2[0];

    for(int i{0}; i < sizeof(arr2)/sizeof(int); i++){
        if(arr2[i] < smallest){
            smallest = arr2[i];
        }
    }
    cout << "The smallest of the array is : " << smallest << endl;

    return 0;
}