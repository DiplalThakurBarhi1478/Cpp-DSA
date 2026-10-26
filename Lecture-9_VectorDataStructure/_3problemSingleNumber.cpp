#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = {1, 2, 4, 1 , 2};

    // Method 1: ---------------------------------------------------------self
    int sum = 0;
        for(int num : nums){
            sum += num;
        }

        for(int i{0}; i< nums.size(); i++){
            for(int j{i + 1}; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    sum -= nums[i] * 2;
                }
            }
        }
        cout << "The unique number is : " << sum << endl; 

    // Method 2: ------------------------------------------------------- Bitwise XOR method
         
    int result = 0;

        for(int num : nums){
           result = result ^ num;
        }

        cout << "The unique number is : " << result << endl;


    return 0;
}