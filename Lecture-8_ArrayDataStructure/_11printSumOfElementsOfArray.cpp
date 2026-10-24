#include<iostream>

using namespace std;

int sum(int arr[], int size){
    int Sum = 0;
    for(int i{0}; i < size; i++){
        Sum = Sum + arr[i];
    }

    return Sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(int);

    int Sum = sum(arr, size);

    cout << "The sum of the elements of the array : " << Sum << endl;

    return 0;
}