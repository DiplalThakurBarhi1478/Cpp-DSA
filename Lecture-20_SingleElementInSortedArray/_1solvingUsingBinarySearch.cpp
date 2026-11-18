#include<iostream>
#include<vector>

using namespace std;

int singleElement(vector<int> &nums){
    int st = 0;
    int end = nums.size() - 1;

    while(st <= end){

        //step 1: find mid
        int mid = st + (end - st)/2;


        //step 2: check if mid is the answer
        if(nums.size() == 1) return nums[0];

        if(mid == st || mid == end){
            return nums[mid];
        }

        if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]){
            return nums[mid];
        }

        // step 3: finding the search space
        if((mid - st)%2 == 0){ //even
            if(nums[mid - 1] == nums[mid]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else{
            if(nums[mid - 1] == nums[mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }

    return -1;
}


int main(){
    vector<int> vec = {2, 2, 4, 5, 5, 6, 6, 7, 7, 8, 8};

    int ans = singleElement(vec);

    cout << "The value is : " << ans << endl;

    return 0;
}
