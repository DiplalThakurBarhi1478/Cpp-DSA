#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end){
    if(start <= end){
        int mid = start + (end - start)/2;

        if(target > arr[mid]){
            return binarySearch(arr, target, mid + 1, end);
        }
        else if(target < arr[mid]){
            return binarySearch(arr, target, start, mid - 1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1, 4, 7, 8};

    int target = 8;
    
    int start = 0;
    int end = nums.size() - 1;

    int ans = binarySearch(nums, target, start, end);

    cout << ans << endl;

    return 0;
}