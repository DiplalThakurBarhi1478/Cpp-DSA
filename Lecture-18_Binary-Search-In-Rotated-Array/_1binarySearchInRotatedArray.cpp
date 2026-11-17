#include<iostream>
#include<vector>

using namespace std;

int bsInRotatedArray(vector<int> &vec, int target){
    //steps:
    //1. first find the completely sorted half 
    //2. inside it use binary search in the sorted.

    int st = 0;
    int end = vec.size() - 1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(target == vec[mid]){
            return mid;
        }

        // if first element is less than mid then the left part is sorted
        if(vec[st] <= vec[mid]){
            if(vec[st] < target && target < vec[mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{// else right part is sorted.
            if(vec[mid] < target && target < vec[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
}


int main(){
    vector<int> vec = {6, 7, 8, 0, 1, 2, 3, 4, 5};
    int target = 4;

    int indexOfTheNumber = bsInRotatedArray(vec, target);

    cout << "The index of the target " << target << " is : " << indexOfTheNumber;

    return 0;
}