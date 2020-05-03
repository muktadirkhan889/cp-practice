// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rans[26]={0},mag[26]={0};
        for(int i=0;i<ransomNote.size();i++) {
            rans[ransomNote[i]-97]++;
        }
        for(int i=0;i<magazine.size();i++) {
            mag[magazine[i]-97]++;
        }
        for(int i=0;i<26;i++) {
            if(mag[i]<rans[i]) {
                return false;
            }
        }
        return true;
    }
};
