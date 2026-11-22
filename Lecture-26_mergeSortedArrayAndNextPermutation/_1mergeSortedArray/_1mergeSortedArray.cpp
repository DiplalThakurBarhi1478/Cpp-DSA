// we go backward from the last position using idx
// we go backward in the first array using i index
// we go backward in the second array using j index
// if the ith position value is greater then idx = ith
// if the jth position value is lesser than idx = jth

#include<iostream>
#include<vector>

using namespace std;

void mergeSortedArray(vector<int>& A, vector<int>& B, int m, int n){
    int idx = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while(i >= 0 && j >= 0){
        
        if(A[i] >= B[j]){
            A[idx--] = A[i--];
        }
        else{
            A[idx--] = B[j--];
        }
    }

    while(j >= 0){
        A[idx--] = B[j--];
    }

    for(int i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }

}

int main(){

    vector<int> A = {2, 3, 4, 0, 0, 0, 0};
    int m = 3;      

    vector<int> B = {4, 5, 6, 7};
    int n = 4;

    mergeSortedArray(A, B, m, n);  

    return 0;
}