// Linear Search Method
// Brute Force Method
// Time Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int>& arr){

    // Linear Search
    int result;
    for(int i{1}; i < arr.size(); i++){
        if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1]){
            result = i;
        }
    }
    return result;
}

int main(){
    vector<int> mountainArr = {0, 1, 3, 6, 4, 2};
    int index = peakIndex(mountainArr);
    cout << "The index is: " << index << endl;

    return 0;
}