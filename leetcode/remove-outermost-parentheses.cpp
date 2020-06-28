/* https://leetcode.com/problems/remove-outermost-parentheses/ */
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res="";
        int j=0,start=0;
        for(int i=0;i<S.size();i++) {
            if(S[i]=='(')
                j++;
            else if(S[i]==')') 
                j--;
            if(j==0) {
                res+=S.substr(start+1, i-start-1);
                start = i + 1;
            }
        }
        return res;
    }
};
