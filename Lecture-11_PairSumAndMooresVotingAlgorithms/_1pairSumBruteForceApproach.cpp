#include<iostream>
#include<vector>

using namespace std;

vector<pair<int, int>> pairSum(vector<int>& nums, int targetSum){

    vector<pair<int, int>> ans;

    for(int i{0}; i < nums.size(); i++){       
        // creating pairs and inserting into the pair vector
        for(int j{i + 1}; j < nums.size(); j++){
            if(nums[i] + nums[j] == targetSum){
                ans.emplace_back(i, j);
            }
        }
    }
    return ans;
}

int main(){
    // RETURN PAIR IN SORTED ARRAY WITH THE TARGET SUM

    vector<int> nums = {1, 2, 3, 4, 5, 6}; 
    // sorted vector
    int targetSum = 9;

    vector<pair<int,int>> pairs = pairSum(nums, targetSum); 
    // calling hte function and storing intot he pair vector

    for(auto pair: pairs){                  
        // looping into the pair and printing all thos first and second elemlent of the pair.
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}