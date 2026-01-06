class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>order;   //array for output
        for(int i=0;i<words.size();i++){  //outer loop on words array
            for(int j=0;j<words[i].size();j++){  //inner loop on string in array words
                if(words[i][j]==x){   //condition
                    order.push_back(i);  //push index of that string
                    break;  //break the inner loop and increment value of i
                }
            }
        }
        return order;   //output
    }
};