class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxSUM=INT_MIN;
        for(int i:nums){
            sum+=i;
            maxSUM=max(sum,maxSUM);    //choose which is larger from both
            if(sum<0){
                sum=0;
            }
        }
        return maxSUM;
    }
};