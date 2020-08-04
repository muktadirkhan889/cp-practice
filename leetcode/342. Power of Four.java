// O(logn)
class Solution {
    public boolean isPowerOfFour(int num) {
        if(num == 0) {
            return false;
        }
        while(num != 1) {
            if(num % 4 != 0) {
                return false;
            }
            num /= 4;
        }
        return true;
    }
}

// Constant time, bit manipulation
class Solution {
    public boolean isPowerOfFour(int num) {
        if(num==0) {
            return false;
        }
        return (num & (num-1))==0 && num%3==1;
    }
}
