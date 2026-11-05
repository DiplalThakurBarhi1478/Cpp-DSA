#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){
        int mid = (start + end)/2;

        if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
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

    int ans = binarySearch(nums, target);

    cout << ans << endl;

    return 0;
}