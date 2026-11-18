#include<iostream>
#include<vector>


using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxBookAllocation){

    int student = 1; 
    int pages = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxBookAllocation){
            return false;
        }

        if(pages + arr[i] <= maxBookAllocation){
            pages += arr[i];
        }else{
            pages = arr[i];
            student++;
        }
    }

    return student > m ? false: true;
}

int bookAllocation(vector<int>& arr, int n, int m){
    
    if(m > n){
        return -1;
    }

    int sum = 0;

    // finding sum of the arr
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int st = 0, end = sum;
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {15, 17, 20};
    int n = 3, m = 2;

    cout << bookAllocation(arr, n, m) << endl;

    return 0;
}