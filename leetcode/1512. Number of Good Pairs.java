// O(n^2)
class Solution {
    public int numIdenticalPairs(int[] nums) {
        int res = 0;
        for(int i=0; i<nums.length-1; i++) {
            for(int j=i+1; j<nums.length; j++) {
                if(i<j && nums[i]==nums[j]) {
                    res++;
                }
            }
        }
        return res;
    }
}

// O(n)
class Solution {
    public int numIdenticalPairs(int[] nums) {
        int res = 0;
        int count [] = new int[101];
        for(int n: nums) {
            count[n]++;
        }
        for(int c: count) {
            res+=(c*(c-1)/2);
        }
        return res;
    }
}
