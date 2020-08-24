// O(logn)
class Solution {
    public int subtractProductAndSum(int n) {
        int sum, prod, rem;
        sum = 0;
        prod = 1;
        while(n!=0) {
            rem = n%10;
            sum+=rem;
            prod*=rem;
            n/=10;
        }
        return prod-sum;
    }
}
