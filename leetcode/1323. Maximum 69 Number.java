// O(logn)
class Solution {
    public int maximum69Number (int num) {
        
        int numDigits = (int) Math.floor(Math.log10(num)) + 1;
        
        int rem = 0, ans = 0, multiplier;
        
        while(numDigits > 0) {
            
            multiplier = (int) Math.pow(10, numDigits - 1);
            
            rem = num / multiplier;
            num %= multiplier;
            
            if(rem == 9) {
                ans += rem * multiplier;
            } else {
                ans += 9 * multiplier;
                break;
            }
            numDigits--;
        }
        return ans + num;
        
        
    }
}
