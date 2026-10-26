#include<iostream>
#include<vector>

using namespace std;

void reverseVector(vector<int> &nums){ 
    // two pointer approach

    int start = 0;
    int end = nums.size() - 1;

    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};

    reverseVector(nums); 
    // passing the vector by reference for actual change in the memory

    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}