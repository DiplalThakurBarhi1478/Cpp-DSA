#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> &prices){

    int buyingPrice = prices[0], maximumProfit = 0;

    for(int i = 1; i < prices.size(); i++ ){
        if(prices[i] > buyingPrice){
            maximumProfit = max(maximumProfit, prices[i] - buyingPrice);
        }

        buyingPrice = min(buyingPrice, prices[i]);
    }

    return maximumProfit;

}

int main(){

    vector<int> nums = {7, 1, 3, 5, 2, 8};

    int maximumProfit = maxProfit(nums);

    cout << "The maximum profit is : " << maximumProfit << endl;


}