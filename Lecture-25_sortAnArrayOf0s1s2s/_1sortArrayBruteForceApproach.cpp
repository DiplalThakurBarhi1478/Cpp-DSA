#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> nums = {0, 0, 1, 0, 1, 2, 0, 1, 2, 2, 1};

    //simply using the function to sort the vector
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}