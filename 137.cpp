class Solution {
    public int singleNumber(int[] nums) {
        int a = 0, b = 0;
        for (int x : nums) {
            a = (a ^ x) & ~b;
            b = (b ^ x) & ~a;
        }
        return a;
    }
}