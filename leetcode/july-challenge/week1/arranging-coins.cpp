/* https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/ */
// Time complexity O(sqrt n)
class Solution {
public:
    int arrangeCoins(int n) {
        int i;
        for(i=1;i<=n;i++) {
                n-=i;
        }
        return i-1;
    }
};
