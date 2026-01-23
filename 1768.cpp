class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int ptr1=0,ptr2=0;
        while(ptr1<word1.size() || ptr2<word2.size()){
            if(ptr1<word1.size()){
                result=result+word1[ptr1];
            }
            if(ptr2<word2.size()){
                result=result+word2[ptr2];
            }
            ptr1++;
            ptr2++;
        }
        return result;
    }
};