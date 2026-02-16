class Solution {
public:
    string removeStars(string s) {
        string t="";
        for(char c:s){
            if(c!='*'){
                t.push_back(c);
            }else{
                t.pop_back();
            }
        }
        return t;
    }
};