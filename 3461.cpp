class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()!=2){
            string newStr="";
            for(int i=0;i<s.size()-1;i++){
                int sum=(s[i]-'0'+s[i+1]-'0')%10;
                newStr+=char(sum+'0');
            }
            s=newStr;
        }
        return s[0]==s[1];
    }
};