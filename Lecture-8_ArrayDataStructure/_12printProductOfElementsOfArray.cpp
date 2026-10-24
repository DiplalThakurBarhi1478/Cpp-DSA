#include<iostream>

using namespace std;

int Product(int arr[], int size){
    int multiple = 1;
    for(int i{0}; i < size; i++){
        multiple = multiple * arr[i];
    }
    
    return multiple;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(int);

    int multiple = Product(arr, size);
    cout << "The sum of the elements of the array : " << multiple << endl;

    return 0;
}