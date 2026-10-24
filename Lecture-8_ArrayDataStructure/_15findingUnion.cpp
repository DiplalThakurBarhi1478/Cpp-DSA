#include<iostream>
#include<vector>

using namespace std;

void Union(int arr1[], int arr2[], int size1, int size2){
    vector<int> commonElements;
    for(int i{0}; i < size1; i++){
        for(int j{0}; j < size2; j++){
            if(arr1[i] == arr2[j]){
                commonElements.push_back(arr1[i]);
            }
        }
    }

    for(int i{0}; i < commonElements.size(); i++){
        cout << commonElements[i] << " ";
    }

}

int main(){

    int arr1[] = {1, 2, 4, 5, 7, 2, 8, 9};
    int arr2[] = {2, 4, 6, 7, 8, 9, 3, 2};

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);


    Union(arr1, arr2, size1, size2);

    return 0;

}