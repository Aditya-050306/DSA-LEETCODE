class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[n-1]){
            return nums[0];
        }
        if(nums[0]==0){
            return nums[n-1];
        } 
        if(nums[n-1]==0){
            return nums[0];
        }
        int gcd=1;
        for(int i=1;i<=min(nums[0],nums[n-1]);i++){
            if(nums[0]%i==0 && nums[n-1]%i==0){
                gcd=i;
            }
        }
        return gcd;   
    }
};