class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> temp=nums;
        for(int i:nums){
            int rev=0;
            while(i>0){
                rev=rev*10+(i%10);
                i/=10;
            }
            temp.push_back(rev);
        }
        int max= *max_element(temp.begin(),temp.end());
        vector<int> freq(max+1,0);
        int count=0;
        for(int x:temp){
            freq[x]++;
        }
        for(int y:freq){
            if(y>0){
                count++;
            }
        }
        return count;
    }
};