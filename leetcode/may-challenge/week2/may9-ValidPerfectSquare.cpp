// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long i=1;i*i<=num;i++) {
            if(num%i==0 && num/i == i) {
                return true;
            }
        }
        return false;
    }
};
