/* https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3391/ */
class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        string word="";
        for(auto chr: s) {
            if(chr==' ') {
                if(word.size()>0)
                    stk.push(word);
                word="";
            } else 
                word+=chr;
        }
        if(word!=" ")
            stk.push(word);
        string ans="";
        while(stk.size()>1) {
                ans+=stk.top();
                ans+=" ";
                stk.pop();
        }
        ans+=stk.top();
        if(ans[0]==' ')
            ans.erase(ans.begin(),ans.begin()+1);
        return ans;
    }
};
