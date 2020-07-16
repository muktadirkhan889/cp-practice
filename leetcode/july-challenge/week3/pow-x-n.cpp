/* 
Divide and Conquer
https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3392/
*/
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) 
            return 1;
        double temp = pow(x,n/2);
        if(n%2==0) 
            return temp*temp;
        else {
            if(n>0) 
                return x*temp*temp;
            else
                return (temp*temp)/x;
        }
        
    }
};
