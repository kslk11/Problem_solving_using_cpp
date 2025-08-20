class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty())
            return 0;

        sort(points.begin(), points.end(),
             [](auto& a, auto& b) { return a[1] < b[1]; });

        int arrows = 1;
        long long lastEnd = points[0][1];
        for (auto& p : points) {
            if (p[0] > lastEnd) {
                arrows++;
                lastEnd = p[1];
            }
        }
        return arrows;
    }
};