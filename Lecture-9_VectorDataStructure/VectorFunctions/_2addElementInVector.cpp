#include<iostream>
#include<vector> // vector header

using namespace std;

int main(){
    // declaring and initializing
    vector<int> vec = {1, 2, 3, 4};

    // adding element in the vector 
    vec.push_back(5);

    // printing each element using the for each loop
    for(int num : vec){
        cout << num << " ";
    }

    return 0;
}