#include<iostream>
#include<vector>

using namespace std;

vector<pair<int, int>> pairSum(vector<int> nums, int target){
    vector<pair<int,int>> pairs;

    int start = 0;
    int end = nums.size() - 1;

    while(start < end){
        if(nums[start] + nums[end] == target){
            pairs.emplace_back(start, end);
            break;
        }
        else if(nums[start] + nums[end] < target){
            start++;
        }
        else{
            end --;
        }
        
    }   
    return pairs;
}

int main(){
    vector<int> nums = {-1, 3, 6, 7, 10}; // for sorted vector
    int target = 9;

    vector<pair<int, int>> pairs = pairSum(nums, target);

    for(auto pair: pairs){
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}