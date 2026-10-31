#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int containerWithMostWater(vector<int>& water){

    int maxArea = 0;
    
    for(int i {0}; i < water.size(); i++){
        for(int j{i + 1}; j < water.size(); j++){
            int width = j - i;
            int height = min(water[i], water[j]);
            int area = width * height;
            maxArea = max(area, maxArea);
        }
    }

    return maxArea;
}

int main(){
    vector<int>water = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int maxArea = containerWithMostWater(water);

    cout << "The maximum water it can contain is : " << maxArea << endl;
    
    return 0;

}