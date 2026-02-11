class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n,0);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    freq[i]++;
                }
                else if(nums[i]==nums[j]){
                    continue;
                }
                else{
                    freq[j]++;
                }
            }
        }
        return freq;
    }
};