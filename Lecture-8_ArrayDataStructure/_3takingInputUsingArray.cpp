#include<iostream>

using namespace std;

int main(){

    int arr2[5];
    // just declaring

    for(int i{0}; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    // taking input using loop
    {
        cout << "arr2[" << i << "] : ";
        cin >> arr2[i];
    }

    for(int i{0}; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    // printing all of them
    {
        cout << arr2[i] << " ";
    }



    return 0;
}