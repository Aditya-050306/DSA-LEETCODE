class Solution {
public:
    int findClosest(int x, int y, int z) {
        int countX= abs(x-z);
        int countY= abs(y-z);
        if(countX<countY){
            return 1;
        }
        else if(countX>countY){
            return 2;
        }
        return 0;
    }
};