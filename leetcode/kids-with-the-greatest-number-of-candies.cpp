/* https://leetcode.com/problems/kids-with-the-greatest-number-of-candies */
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCan = candies[0];
        int n = candies.size();
        for(int i=0;i<n;i++) {
            maxCan = max(maxCan,candies[i]);
        }
        for(int i=0;i<n;i++) {
            ans.push_back(candies[i]+extraCandies>=maxCan);
        }
        return ans;
    }
};
