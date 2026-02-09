class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int n=highLimit-lowLimit+1;
        int maxBalls=0;
        vector<int> freq(50,0);   //maximum sum will be of 99999
        for(int  i=lowLimit;i<=highLimit;i++){
            int num=i;
            int sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            freq[sum]++;
            maxBalls=max(maxBalls,freq[sum]);
        }
        return maxBalls;
    }
};