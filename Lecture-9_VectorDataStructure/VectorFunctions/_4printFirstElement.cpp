#include<iostream>
#include<vector> // vector header

using namespace std;

int main(){
    // declaring and initializing
    vector<int> vec = {1, 2, 3, 4};

    //using front() function to print first element of the vector
    cout << "The first element of the vector is : " <<  vec.front();

    return 0;
}