class Solution {
    static int next(int n) {
        int sum = 0;
        while(n!=0) {
            sum += ((n%10)*(n%10));
            n/=10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        int tortoise = n;
        int hare = next(n);
        while(tortoise!=hare) {
            tortoise = next(tortoise);
            hare = next(next(hare));
            
        }
        return tortoise==1;
    }
    
}

// Can also be done using a set.
