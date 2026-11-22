// in this code, we pass two times
// how? first we pass array to count numbers, then we pass again to overwrite the number...

#include<iostream>

using namespace std;

void optimizedApproach(int arr[], int n){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    //O(n)
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count0++;
        }

        if(arr[i] == 1){
            count1++;
        }

        if(arr[i] == 2){
            count2++;
        }
    }

    int idx = 0;
    // O(n)
    for(int i = 0; i < count0; i++){
        arr[idx++] = 0;
    }

    for(int i = 0; i < count1; i++){
        arr[idx++] = 1;
    }

    for(int i = 0; i < count2; i++){
        arr[idx++] = 2;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {0, 0, 1, 0, 1, 2, 0, 1, 2, 2, 1};
    int n = 11;
    optimizedApproach(arr, n);
    printArray(arr, n);
    return 0;
}