class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum(accounts.size(),0);
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum[i]+=accounts[i][j];
            }
        }
        int maxElement=INT_MIN;
        for(int i=0;i<sum.size();i++){
            maxElement=max(maxElement,sum[i]);
        }
        return maxElement;
    }
};