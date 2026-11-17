// Whenever there is sorted either the whole array or some part of it. We use *binary search method*.
// Binary search method mean for every new search the space search should be half of the previous.
// Time complexity: O(logn)
// if there is *mountain array*, then obviously there has to be increasing and decreaing order so it implies sorted some part.

#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int>& arr){
    int st = 1;
    int end = arr.size() - 2;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(arr[mid-1] < arr[mid]  && arr[mid] > arr[mid + 1]){
            return mid;
        }

        if(arr[mid-1] < arr[mid]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    
    }

    return -1;
}

int main(){
    vector<int> mountainArr = {0, 1, 3, 6, 8, 9, 7, 4, 2};
    int index = peakIndex(mountainArr);
    cout << "The index is: " << index << endl;

    return 0;
}


