#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int isPossible(vector<int>& arr, int n, int c, int minDistance){
    

    int lastPosition = arr[0];
    int cow = 1;
    
    for(int i = 0; i < n; i++){

        if((arr[i] - lastPosition) >= minDistance){
            cow++;
            lastPosition = arr[i];
        }
        
        if(cow == c){
            return true;
        }
    }
    return false;
}

int aggressiveCow(vector<int> arr, int n, int c){
    sort(arr.begin(), arr.end());
    
    int N = arr.size() - 1;

    int st = 1;
    int end = arr[N] - arr[0];
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isPossible(arr, n, c, mid)){
            ans = mid;
            st = mid + 1;
        }else{
            end = mid - 1;
        }   
    }

    return ans;
}

int main(){
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = 5;
    int c = 3;

    cout << aggressiveCow(arr, n, c);

    return 0;
}