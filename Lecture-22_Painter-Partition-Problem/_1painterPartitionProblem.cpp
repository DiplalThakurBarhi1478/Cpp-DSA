#include<iostream>
#include<vector>

using namespace std;

bool isValid(vector<int>& arr, int n, int m, int minTime){
    int time = 0;
    int painter = 1;
    for(int i = 0; i < n; i++){
        if(time + arr[i] <= minTime){
            time += arr[i];
        }else{
            time = arr[i];
            painter++;
        }   
    }

    return painter > m ? false : true;
}

int painterPartition(vector<int>& arr, int n, int m){
    if(m > n){
        return -1;
    }

    //calculating sum
    int sum  = 0;
    for(int i = 0; i < n; i++ ){
        sum += arr[i];
    }

    int st = 0, end = sum;
    int ans = -1;
    while(st <= end){
        
        int mid = st + (end - st)/2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
	vector<int> arr = {40, 30, 10, 20};
    int n = 4; 
    int m = 2;

	cout << painterPartition(arr, n, m);
	
	return 0;
}