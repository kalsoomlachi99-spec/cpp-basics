#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector <int>& prices){

    int maxProfit = 0, bestBuy = prices[0];
    int n = prices.size();

    for (int i = 1; i < n; i++){ // i=1 because selling isn't possible on 0th(buying) day

        if(bestBuy < prices[i]){
            maxProfit = max(maxProfit , prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy , prices[i]);
    }
    return maxProfit;
}

int main() {
    
    /*Best Time To Buy And Sell Stock*/
    // Leetcode 121

    vector <int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << maxProfit(prices) << endl; // 5

    return 0;
}
