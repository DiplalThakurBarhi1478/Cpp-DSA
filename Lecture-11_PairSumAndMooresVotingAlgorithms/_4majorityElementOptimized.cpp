#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int majorityElementOptimized(vector<int> nums){

    // sort
    sort(nums.begin(), nums.end());

    // count frequency
    int frequency = 1;
    int ans = nums[0];

    for(int i{1}; i < nums.size(); i++){ // check the previous number of the sorted vector
        if(nums[i] == nums[i - 1]){
            frequency++;
        }
        else{
            frequency = 1;
            ans = nums[i];
        }

        if(frequency > nums.size()/2){
        return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3, 2, 3, 3, 3, 4, 1, 3};

   int num =  majorityElementOptimized(nums);

   cout << "The number having highest frequency of number is : " << num << endl;

   return 0;

}