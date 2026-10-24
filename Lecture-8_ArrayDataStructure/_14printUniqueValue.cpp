#include<iostream>
#include<set>
#include<vector>

using namespace std;

void uniqueValue(int arr[], int size){

    vector<int> uniqueValueArr;

    for(int i{0}; i < size; i++){ // this logic works for elementing the similar element form the array, if same stop and start ag
        bool isUnique = true;
        for(int j{0}; j < size; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique){
            uniqueValueArr.push_back(arr[i]);
        }
    }
   

    for(int i{0}; i < uniqueValueArr.size(); i++){ // remember to find the size of the vector
        cout << uniqueValueArr[i] << " ";
    }

}

int main(){

    int arr[] = {1, 2, 3, 1, 2, 3, 4, 6}; // 4, 5
    int size = sizeof(arr)/sizeof(int);

    uniqueValue(arr, size);

    return 0;
}