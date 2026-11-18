#include<iostream>
#include<vector>

using namespace std;


bool isValid(vector<int>& arr, int n, int m, int maxBookAllocations){
    int student = 1, pages = 0;


    for(int i = 0; i < n; i++){ // checking if any individual is greater than the maxBookAllocations
        if(arr[i] > maxBookAllocations){
            return false;
        }

        if(pages + arr[i] <= maxBookAllocations){ //checking if the each student get less than the maxbook allocation page
            pages += arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }

    return student > m ? false: true;
}

int bookAllocation(vector<int>& arr, int n, int m){
    
    // checking edge case
    if(m > n){
        return -1;
    }

    // finding the sum 
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }


    // making the sum as the range
    int ans = -1;
    int st = 0; 
    int end = sum;


    // using binary search in the range
    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(arr, n, m, mid)){  // opening the boolean valid function
            // if valid then check in the left
            ans = mid;
            end = mid - 1;
        }else{ // otherwise right
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2, 1, 3, 4};

    int n = 4;
    int m = 2;

    cout << bookAllocation(arr, n, m);

    return 0;
}