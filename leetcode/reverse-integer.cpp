/* https://leetcode.com/problems/reverse-integer/ */
class Solution {
public:
    int reverse(int x) {
        long long int ans=0,n=x;
        bool neg = false;
        if(n<0) {
            n=0-n;
            neg = true;
        } 
        while(n>0) {
            ans = ans*10 + n%10;
            if(ans>INT_MAX || ans<INT_MIN) {
                return 0;
            }
            n/=10;
        }
        return neg ? -1*ans : ans;
        
    }
};
