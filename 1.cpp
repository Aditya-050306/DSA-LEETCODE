class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;  //for storing element and its index
        vector<int> ans;  //for output
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int second=target-first;
            if(m.find(second)!=m.end()){  //checks whether second element is present in map
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            else{
                m[first]=i;   //stores nums[i] element and its index(i) in map
            }
        }
        return ans;
    }
};