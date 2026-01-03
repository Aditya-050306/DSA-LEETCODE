class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m+n-1;    //total size of array after merging
        int i=m-1,j=n-1;   //starting from backwards to add larger elements first
        while(i>=0 && j>=0){  //i for nums1 and j for nums2
            if(nums1[i]>=nums2[j]){   //comparing both array values
                nums1[x]=nums1[i];   
                x--;
                i--;
            }else{
                nums1[x]=nums2[j];
                x--;
                j--;
            }
        }
        while(j>=0){   //if  j is still not 0 then to add elements of nums2 we use this loop
            nums1[x]=nums2[j];
                x--;
                j--;
        }
    }
};