class Solution {
  // Memoization table to cache results
    private double[][] memo;

    public double soupServings(int n) {
        // Optimization: For large n, the probability approaches 1
        if (n > 4800) return 1.0;

        // Scale the input to units of 25ml since all operations are in 25ml increments
        int units = (int) Math.ceil(n / 25.0);

        // Initialize memoization table
        memo = new double[units + 1][units + 1];
        return calculateProbability(units, units);
    }
    private double calculateProbability(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;

        // If soup A runs out first
        if (a <= 0) return 1.0;

        // If soup B runs out first
        if (b <= 0) return 0.0;

        
        if (memo[a][b] != 0) return memo[a][b];
        memo[a][b] = 0.25 * (
            calculateProbability(a - 4, b) +
            calculateProbability(a - 3, b - 1)+
            calculateProbability(a - 2, b - 2) +   
            calculateProbability(a - 1, b - 3)
        );

        return memo[a][b];
        
    }
}
