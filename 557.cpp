class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int low=0;
        for(int i=0;i<=n;i++){
            if(s[i]==' ' || i==n){
                int high=i;
                reverse(s.begin()+low,s.begin()+high);
                low=i+1;
            }
        }
        return s;
    }
};