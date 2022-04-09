class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0,j=0;
        for(int i=1;i<prices.size();i++){
            int compare = prices[i]-prices[j];
            if(compare>maxprof){
                maxprof=compare;
            }
            if(prices[i]<prices[j]){
                j = i;
            }
        }
        return maxprof;
    }
};
