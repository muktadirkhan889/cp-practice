class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(binarySearch(nums, target, true));
        ans.push_back(binarySearch(nums, target, false));
        return ans;
    }
    int binarySearch(vector<int> nums, int target, bool first) {
        int low = 0;
        int high = nums.size()-1;
        int res = -1;
        while(low<=high) {
            int mid = low + (high - low)/2;
            if(nums[mid]==target) {
                res = mid;
                if(first==true) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else if(nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
};
