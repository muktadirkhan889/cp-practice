/* https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero */

// Recursive
class Solution {
public:
    int numberOfSteps (int num) {
        if(num==0) {
            return 0;
        } 
        return 1 + numberOfSteps(num%2==0 ? num/2 : num-1);
    }
};

// Iterative
class Solution {
public:
    int numberOfSteps (int num) {
        int count = 0;
        while(num>0) {
            if(num%2==0) {
                num/=2;
            } else {
                num-=1;
            }
            count++;
        }
        return count;
    }
};
