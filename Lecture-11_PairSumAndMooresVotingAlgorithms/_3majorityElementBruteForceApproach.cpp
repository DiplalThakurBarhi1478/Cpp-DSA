#include<iostream>
#include<vector>

using namespace std;

int majorityElementBFA(vector<int> nums){

    int result;
    for(int val1 : nums){                // to find frequency of the numbers
        int count = 0;
        for(int val2 : nums){
            if(val1 == val2){
                count++;
            }
        }

        if(count > nums.size()/2){      // printing the number whose number of times is greater than n/2;
            result = val1;
        }
    }

    return result;

}

int main(){
    vector<int> nums = {1, 2, 1, 3, 1, 4, 1, 1 };

   int num =  majorityElementBFA(nums);

   cout << "The number having highest frequency of number is : " << num << endl;

   return 0;

}