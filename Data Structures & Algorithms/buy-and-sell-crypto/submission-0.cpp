class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int min = prices[0];
        int maxProf = 0;
        for(int i=1;i<n;i++){
            if(min > prices[i]){
                min = prices[i];
            }
            else if(min < prices[i]){
                maxProf = max(maxProf,(prices[i]-min));
            }
        }
        return maxProf;
    }
};
