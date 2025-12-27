class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(string op: operations){   //loop till array operations is fully traversed
            if(op[1]=='+'){     
                X++;
            }
            else{
                X--;
            }
        }
        return X;        
    }
};