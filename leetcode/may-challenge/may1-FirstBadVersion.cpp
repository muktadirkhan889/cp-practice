// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution {
public:
    int firstBadVersion(int n) {
        bool flag = false;
        int bad = 0,l = 1,r = n,m,ans;
        while(l<=r) {
            int m = l + (r-l) /2;
            if(isBadVersion(m)==true) {
                ans = m;
                r = m - 1;
            } else {
                l = m +1;
            }
        }
        return ans;
    }
};
