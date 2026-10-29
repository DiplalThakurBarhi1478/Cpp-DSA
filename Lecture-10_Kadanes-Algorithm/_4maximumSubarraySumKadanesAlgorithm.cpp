#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){

    vector<int> nums = {1, 2, -3, 5, 6, 9 };

    int currSum = 0;
    int maxSum = -1000;

    for(int i{0}; i < nums.size(); i++){
        currSum = currSum + nums[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << "The highest subarray sum is : " << maxSum;

    return 0;
}