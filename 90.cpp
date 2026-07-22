class Solution {
public:

    void getSubsets(vector<int>& nums, vector<int> &ans,int i, vector<vector<int>> &allsubsets){
        //Base Case
        if(i==nums.size()){
            allsubsets.push_back({ans});
            return;
        }
        //Inclusion
        ans.push_back(nums[i]);
        getSubsets(nums,ans,i+1,allsubsets);

        ans.pop_back();
        //Exclusion
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        getSubsets(nums,ans,idx,allsubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<vector<int>> allsubsets;
        getSubsets(nums,ans,0,allsubsets);
        return allsubsets;
    }
};