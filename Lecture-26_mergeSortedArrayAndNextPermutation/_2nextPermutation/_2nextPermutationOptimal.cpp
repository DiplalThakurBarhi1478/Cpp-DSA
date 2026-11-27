#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Time complexity: O(n)
//Space Complexity: O(1)

void nextPermutation(vector<int>& nums, int n){
    int idx = nums.size() - 2;
    int pivot = -1;

    // first finding the pivot
    for(int i = nums.size() -2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
            pivot = i;
            break;
        }
    } 
   
     // third handling if the case is maximum
    if(pivot == -1){
        reverse(nums.begin(), nums.end());
    }
    else{
          // second finding the next greater number than the pivot
        for(int i = nums.size() - 1; i >=0 ; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        reverse(nums.begin() + pivot + 1, nums.end());
    }
  
    // printing the nums vector
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 4};
    int n = 4;
    nextPermutation(nums, n);
    return 0;
}