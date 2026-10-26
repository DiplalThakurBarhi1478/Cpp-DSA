#include<iostream>
#include<vector> // vector header

using namespace std;

int main(){
    // declaring and initializing
    vector<int> vec = {1, 2, 3, 4};

    // printing the element of that index
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;

    return 0;
}