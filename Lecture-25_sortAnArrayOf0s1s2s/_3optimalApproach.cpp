// Dutch National Flag Algorithm
//Notes: 
// low - 1 = 0
// low = 1
// mid - 1 = 1
// mid = unsorted pointer
// high = unsorted pointer
// high + 1 = 2
// n - 1 = 2


#include<iostream>

using namespace std;

void dutchNationalFlagMethod(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0, 2, 0};
    int n = 10;

    dutchNationalFlagMethod(arr, n);
    printArray(arr, n);

    return 0;
}



