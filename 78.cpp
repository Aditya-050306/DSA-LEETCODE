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
        getSubsets(nums,ans,i+1,allsubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>> allsubsets;
        getSubsets(nums,ans,0,allsubsets);
        return allsubsets;
    }
};