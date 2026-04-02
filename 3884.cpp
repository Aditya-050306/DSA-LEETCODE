class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.length();
        int low=0;
        int high=n-1;
        while(low<=high){
            if(s[low]==s[high]){
                return low;
            }
            low++;
            high--;
        }
        return -1;
    }
};