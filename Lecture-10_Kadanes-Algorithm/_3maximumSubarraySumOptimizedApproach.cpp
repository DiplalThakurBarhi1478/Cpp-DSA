// using Brute Force Approach : 
// finding all possible sub-arrays and finding their sums, then determing the highest sum that is the answer
// it is like first principle method


#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {-1, 2, -3, 4, 5, 6};

    // one loop is removed

    int size = nums.size();
    vector<int> sums;

    int maxSum = 0; // initialize by any number

    for(int st = 0; st < size; st++ ){     
        int sum = 0;             
        for(int end=st; end < size; end++){
            sum = sum + nums[end];
            // storing the end value only as the previous numbers are already added to it.

            maxSum = max(maxSum, sum); 
            // comparing each sum with the max sum if found maximum then change the maxSum with max value.
        }
    }

    cout << "The largest substring sum is : " << maxSum << endl;

    return 0;
}