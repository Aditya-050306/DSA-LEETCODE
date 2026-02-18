class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        double minAvg=INT_MAX;
        while(low<high){
            double avg=(nums[low]+nums[high])/2.0;
            minAvg=min(avg,minAvg);
            low++;
            high--;
        }
        return minAvg;
    }
};