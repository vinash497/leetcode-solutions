class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        // Step 1: Calculate total area and find bounds
        double total_area = 0;
        double low = 1e18, high = -1e18;
        for (auto& sq : squares) {
            double y = sq[1];
            double l = sq[2];
            total_area += l * l;
            low = min(low, y);           // lowest point
            high = max(high, y + l);     // highest point
        }
        double half_area = total_area / 2.0;
        // Step 2: Binary search for the answer
        for (int i = 0; i < 100; i++) {
            double mid = (low + high) / 2.0;
            // Calculate area below line at height 'mid'
            double area_below= 0;
            for (auto& sq : squares) {
                double y = sq[1];
                double l = sq[2];
                if (mid <=y) {
                    // Line is below this square
                    area_below += 0;
                } 
                else if (mid >= y + l) {
                    // Line is above this square (full area)
                    area_below += l * l;
                } 
                else {
                    // Line cuts through the square
                    area_below += (mid - y) * l;
                }
            }
            // Binary search decision
            if (area_below < half_area) {
                low = mid;      // Need to go higher
            } else {
                high = mid;     // This could be answer, try lower
            }
        }
        return high;
    }
};
