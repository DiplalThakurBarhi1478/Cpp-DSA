#include<iostream>
#include<vector> // vector header

using namespace std;

int main(){
    // declaring and initializing
    vector<int> vec = {1, 2, 3, 4};

    // using pop_back() to remove last element from the vector 
    vec.pop_back();

    // printing each element using the for each loop
    for(int num : vec){
        cout << num << " ";
    }

    return 0;
}