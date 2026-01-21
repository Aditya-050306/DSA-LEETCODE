class Solution {
public:
    int findClosest(int x, int y, int z) {
        int countX=0;
        int countY=0;
        while(x!=z){
            if(x>z){
                x--;
                countX++;
            }
            else{
                x++;
                countX++;
            }
        }
        while(y!=z){
            if(y>z){
                y--;
                countY++;
            }
            else{
                y++;
                countY++;
            }
        }
        if(countX>countY){
            return 2;
        }
        else if(countX<countY){
            return 1;
        }
        return 0;
    }
};