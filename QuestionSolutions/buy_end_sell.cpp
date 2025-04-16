#include <iostream>
#include <vector>
using namespace std;

class StockTrader {
public:
    int maxProfit(vector<int>& prices);
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    StockTrader trader;
    cout << "Maximum profit: " << trader.maxProfit(prices) << endl;
    return 0;
}

int StockTrader::maxProfit(vector<int>& prices) {
    int min = prices[0],max = INT_MIN;
    for(int i =1;i<prices.size();i++){
        if(prices[i]<min)
            min = prices[i];
        
        if(max<prices[i]-min)
            max = prices[i]-min;
    }
    return max;
}