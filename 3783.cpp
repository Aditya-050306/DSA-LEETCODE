class Solution {
public:
    int mirrorDistance(int n) {
        string s=to_string(n);  //convert integer to string
        reverse(s.begin(),s.end());  //reverse the string
        return abs(n-stoi(s));  //stoi= again convert string to integer
    }                           //abs=mod||
};