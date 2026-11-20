#include<iostream>
#include<vector>

using namespace std;

vector<int>bubbleSorting(vector<int> nums){
    int n = nums.size();

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(nums[j] > nums[j + 1]){
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    return nums;
}

int main(){
    vector<int> nums = {4, 1, 5, 2, 3};
    vector<int> result = bubbleSorting(nums);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}