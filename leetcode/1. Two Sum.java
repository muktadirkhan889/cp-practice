// O(n^2)

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int ans[] = new int[2];
        for(int i = 0; i < nums.length; i++) {
            for(int j = i + 1; j < nums.length; j++) {
                if(nums[i]+nums[j]==target) {
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }
        return ans;
    }
}


// Time: O(n)
// Space: O(n)
// HashMap

class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int ans[] = new int[2];
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++) {
            
            if(map.containsKey(target - nums[i])) {
                
                ans[0] = map.get(target - nums[i]);
                ans[1] = i;
                break;
                
            }
            
            map.put(nums[i],i);
        
        }
        return ans;
    }
}
