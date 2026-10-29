#include<iostream>
#include<vector>

using namespace std;

int mooresVotingAlgorithm(vector<int> nums){

    int freq = 0;
    int ans = 0;

    for(int i{0}; i < nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }

        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    return ans;

}

int main(){
    vector<int> nums = {2, 6, 2, 2, 4, 5, 2};

    int majorityNumber = mooresVotingAlgorithm(nums);

    cout << "The number having highest frequency is : " << majorityNumber << endl;

    return 0;
}