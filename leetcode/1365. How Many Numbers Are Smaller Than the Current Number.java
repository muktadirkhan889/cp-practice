// Time: O(n)
class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int freq [] = new int[101];
        int res [] = new int[nums.length];
        
        //Calculating the frequency
        for(int i = 0; i < nums.length; i++) {
            freq[nums[i]]++;
        }
        
        //Calculating the prefix sum
        for(int i = 1; i < 101; i++) {
            freq[i] += freq[i-1];
        }
        
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == 0) {
                res[i] = 0;
            } else {
                res[i] = freq[nums[i]-1];
            }
        }
        return res;
    }
}
