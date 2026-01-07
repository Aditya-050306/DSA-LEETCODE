class Solution {
public:
    int climbStairs(int n) {
        int x=2,y=3;   //x=2 because no. of ways for 2 stairs is 2 and y=3 for 3 stairs 
        if(n==1) return n;  
        if(n==2) return n;
        if(n==3) return n;
        for(int i=4;i<=n;i++){  //loop starting from 4 so taking values of ways of 3th and 2nd staris as x and y
            int z=x+y;
            x=y;
            y=z;
        }
        return y;
    }
};
//example \
n=5   no. of ways will be the ways for climbing 4 stairs + 3 stairs \
n=6   no. of ways will be the ways for  climbing 5 stairs + 4 stairs \
and so on...