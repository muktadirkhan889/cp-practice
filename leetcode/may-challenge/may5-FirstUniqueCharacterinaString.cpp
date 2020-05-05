// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
class Solution {
public:
    int firstUniqChar(string s) {
        pair<int, int> arr[256];
        
        for(int i=0;i<s.size();i++) {
            arr[s[i]].first++;
            arr[s[i]].second = i;
        }
        int ans = INT_MAX;
        for(int i=0;i<256;i++) {
            if(arr[i].first==1) {
                ans = min(ans,arr[i].second);
            }
        }
        if(ans!=INT_MAX) {
            return ans;
        }
        return -1;
    }
};
