class Solution {
public:
    double areacalc(double mid, vector<vector<int>>& squares) {
        double area = 0;
        for (auto &it : squares) {
            double y = it[1], side = it[2];
            if (y + side <= mid) {
                area += side * side;
            } else if (y < mid) {
                area += side * (mid - y);
            }
        }
        return area;
    }

    double separateSquares(vector<vector<int>>& squares) {
        double totalarea = 0;
        double low = 1e18, high = -1e18;

        for (auto &it : squares) {
            totalarea += (double)it[2] * it[2];
            low = min(low, (double)it[1]);
            high = max(high, (double)(it[1] + it[2]));
        }

        double target = totalarea / 2.0;
        double eps = 1e-6;

        while (high - low > eps) {
            double mid = (low + high) / 2;
            if (areacalc(mid, squares) < target)
                low = mid;
            else
                high = mid;
        }

        return low;
    }
};
