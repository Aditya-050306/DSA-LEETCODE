class Solution {
public:
    string sortVowels(string s) {
        string t="";
        for(char ch:s){
            if(isVowel(ch)){
                t.push_back(ch);
            }
        }
        sort(t.begin(),t.end());
        int x=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]=t[x];
                x++;
            }
        }
        return s;
    }
    bool isVowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
    }
};