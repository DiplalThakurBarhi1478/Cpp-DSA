#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int containerWithMostWater(vector<int>& height){

    int maxArea = 0;
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {

        int h = min(height[left], height[right]);
        int width = right - left;
        int area = h * width;

        maxWater = max(maxWater, area);

        if (height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }

    return maxWater;
}

int main(){
    vector<int>height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int maxArea = containerWithMostWater(height);

    cout << "The maximum water it can contain is : " << maxArea << endl;
    
    return 0;

}