#include<iostream>

using namespace std;

int main(){

    int arr2[5] = {1, 2, 3, 4, 5};
    // declaration and initialization

    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    // printing the single member of the array using "index"



    for(int i{0}; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    // printing all member elements by "looping"
    {
        cout << arr2[i] << " ";
    }

    return 0;
}