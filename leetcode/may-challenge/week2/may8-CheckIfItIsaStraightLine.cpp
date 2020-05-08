class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2) {
            return true;
        } else {
            float s = slope(coordinates[0][0], coordinates[0][1], coordinates[1][0], coordinates[1][1]);
            for (int i=1;i<coordinates.size()-1;i++) {
                if(s!=slope(coordinates[i][0], coordinates[i][1], coordinates[i+1][0], coordinates[i+1][1])) {
                    return false;
                }
                
            }
        }
        return true;
    }
    float slope(int x1, int y1, int x2, int y2) {
        int n = y2-y1;
        int d = x2-x1;
        return (float)n/d;
    }
};
