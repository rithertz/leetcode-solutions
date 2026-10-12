// Problem: Final Prices With a Special Discount in a Shop
// Difficulty: Easy
// Link: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    prices[i]-=prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};