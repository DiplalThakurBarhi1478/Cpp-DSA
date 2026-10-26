#include<iostream>
#include<vector> // vector header

using namespace std;

int main(){
    // Method 1 ---------------------------------
    vector<int> vec1;

    // Method 2 ---------------------------------
    vector<int> vec2 = {1, 2, 3};

    // using for each loop to print vector
    for(int num : vec2){ // num is a iterator
        cout << num << " ";
    }

    cout << endl;

    //Method 3 ---------------------------------
    vector<int> vec3(5, 1);

    // using for each loop to print vector
    for(int num : vec3){ // num is a iterator
        cout << num << " ";
    }

    return 0;
}