// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
class Solution {
    public int findComplement(int num) {
        int bits = (int) Math.floor(Math.log(num)/Math.log(2))+1;
        return ((1<<bits)-1)^num;
    }
}
