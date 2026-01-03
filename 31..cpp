class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;  //index where the next permutation will occur
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){  //if array is in decreasing order then no permutation 
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>pivot;i--){  //swapping pivot with the next larger element than it
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        int a=pivot+1,b=n-1;
        while(a<=b){  //reverse the array from the pivot index to the last 
            swap(nums[a],nums[b]);
            a++;
            b--;
        }
    }
};