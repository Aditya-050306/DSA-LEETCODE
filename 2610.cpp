class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(201,0);
        
       
        for(int i:nums){
            freq[i]++;
        }
        int maxFreq=0;
        for(int i:freq){
            maxFreq=max(i,maxFreq);
        }
         vector<vector<int>> result(maxFreq);
        for(int i=0; i<=200;i++){
            for(int j=0;j<freq[i];j++){
                result[j].push_back(i);
            }
        }
        return result;
    }
};