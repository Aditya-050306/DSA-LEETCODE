class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){  //s.find()=it is used to search substring of s and return the index
            s.erase(s.find(part),part.length());  //s.erase(start,length)=it is to remove specific part of a string
        }
        return s;
    }
};