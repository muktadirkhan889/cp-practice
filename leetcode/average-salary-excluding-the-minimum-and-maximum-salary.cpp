/* https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary */
class Solution {
public:
    double average(vector<int>& salary) {
        double avg = (accumulate(salary.begin(), salary.end(), 0) - *max_element(salary.begin(),salary.end()) - *min_element(salary.begin(),salary.end()));
        return avg/(salary.size()-2);
    }
};
