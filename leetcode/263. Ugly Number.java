// Time: O(logn), Space: O(1)
class Solution {
    public boolean isUgly(int num) {
        if(num<=0) {
            return false;
        }
        while(num%5==0) num/=5;
        while(num%3==0) num/=3;
        while((num & 1)!=1) num/=2; // num & 1 is 1 when number is odd.
        return num==1;
    }
}
