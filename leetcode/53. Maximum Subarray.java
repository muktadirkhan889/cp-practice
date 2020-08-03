// O(n^3)

class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int maxSubarraySum = Integer.MIN_VALUE;
        for(int left = 0; left<n;left++) {
            for(int right=left;right<n;right++) {
                int windowSum = 0;
                for(int k=left;k<=right;k++) {
                    windowSum+=nums[k];
                }
                maxSubarraySum = Math.max(maxSubarraySum, windowSum);
            }
        }
        return maxSubarraySum;
    }
}

//==============================================================================

// O(n^2)

class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int maxSubarraySum = Integer.MIN_VALUE;
        
        for(int left = 0; left<n; left++) {
            int windowSum = 0;
            for(int right = left; right<n; right++) {
                
                windowSum += nums[right];
                maxSubarraySum = Math.max(maxSubarraySum, windowSum);
            }
        }
        
        return maxSubarraySum;
    }
}

//==============================================================================

// O(n)

class Solution {
    public int maxSubArray(int[] nums) {
        
        int maxSoFar = nums[0];
        int currMax = nums[0];
        
        for(int i = 1; i < nums.length; i++) {
            
            currMax = Math.max(nums[i], currMax + nums[i]);
            maxSoFar = Math.max(maxSoFar, currMax);
        
        }
        
        return maxSoFar;
    }
}
