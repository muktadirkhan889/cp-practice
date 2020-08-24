// O(1)
class Solution {
    public int minOperations(int n) {
        int m = n / 2;
        if (n%2!=0) {
            return m*(m+1);
        }
        return m * m;
    }
}

// Can also be written as

class Solution {
    public int minOperations(int n) {
        return (n * n) / 4;
    }
}
