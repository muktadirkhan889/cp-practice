/* https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/ */
class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> stk;
        for(int i=0;i<S.size();i++) {
            if(S[i]==')' && stk.size()>0 && stk.top()=='(') {
                stk.pop();
            } else {
                stk.push(S[i]);
            }
        }
        return stk.size();
    }
};
