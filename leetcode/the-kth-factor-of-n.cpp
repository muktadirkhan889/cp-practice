/* https://leetcode.com/problems/the-kth-factor-of-n/ */
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<long long> v; 
        for (int i = 1; i <= sqrt(n); i++) { 
            if (n % i == 0) { 
                v.push_back(i); 
                if (i != sqrt(n)) 
                    v.push_back(n / i); 
            } 
        } 

        sort(v.begin(), v.end()); 

        if (k > v.size()) 
            return -1;
        else
            return v[k - 1]; 
        }
};
