// using Brute Force Approach : 
// finding all possible sub-arrays and finding their sums, then determing the highest sum that is the answer
// it is like first principle method


#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {-1, 2, -3, 4, 5, 6};
   
    int size = nums.size();

    vector<int> sums;

    for(int st = 0; st < size; st++ ){                  // first code
        for(int end=st; end < size; end++){
            int sum = 0;
            for(int i = st; i <= end; i++){
                cout << nums[i];
                sum = sum + nums[i];
            }
            cout << " ";
            sums.push_back(sum);
        }
        cout << endl;
    }

    int largest = sums[0];
    for(int i {0}; i < sums.size(); i++){
        if(largest < sums[i]){
            largest = sums[i];
        }
    }

    cout << "The largest substrig sum is : " <<  largest << endl; 
   

    return 0;
}