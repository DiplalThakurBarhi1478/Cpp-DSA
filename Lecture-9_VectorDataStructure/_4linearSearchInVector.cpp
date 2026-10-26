#include<iostream>
#include<vector>

using namespace std;

int search(vector<int> &nums, int target){
    bool isInVector = false;

    for(int num : nums){
        if(num == target){
            isInVector = true;
        }
    }
    return isInVector;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};

    int target = 4;

    bool result = search(nums, target);

    if(result == 1){
        cout << "Yes, it was found" << endl;
    }else{
        cout << "It was not found" << endl;
    }

    return 0;

}