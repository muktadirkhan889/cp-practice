// Space, time: O(n)

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> set = new HashSet<>(nums.length);
        for(int n: nums) {
            if(set.contains(n)) {
                return true;
            } set.add(n);
        }
        return false;
    }
}
