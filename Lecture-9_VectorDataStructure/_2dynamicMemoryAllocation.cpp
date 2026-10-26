#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);

    cout << "The size of the vector is : " << vec.size() << endl; // 3
    cout << "The capacity of the vector is : " << vec.capacity() << endl; // 4

    return 0;
}