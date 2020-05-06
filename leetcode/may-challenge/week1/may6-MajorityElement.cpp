// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = findCandidate(nums);
        bool ismaj = isMajority(nums, cand);
        return cand;
    }
    int findCandidate(vector<int>& a) {
        int maj_index=0, count=1;
        for(int i=1;i<a.size();i++) {
            if(a[maj_index]==a[i]) {
                count++;
            } else {
                count--;
            }
            if(count==0) {
                maj_index = i;
                count=1;
            }
        }
        return a[maj_index];
    }
    bool isMajority(vector<int>& a, int cand) {
        int count=0;
        for(int i=0;i<a.size();i++) {
            if(a[i]==cand) {
                count++;
            }
        }
        if(count>floor(a.size()/2)) {
                return 1;
        }
        return 0;
    }
};
