 class Solution {
    public int maxTwoEvents(int[][] events) {
        Arrays.sort(events, (a, b) -> (a[0] != b[0]) 
                ? Integer.compare(a[0], b[0])
                : Integer.compare(a[1], b[1]));

        int n = events.length;
        int[] starts = new int[n];
        int[] suffix = new int[n];

        for (int i = 0; i < n; i++) starts[i] = events[i][0];

        suffix[n - 1] = events[n - 1][2];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = Math.max(suffix[i + 1], events[i][2]);
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            int idx = Arrays.binarySearch(starts, events[i][1] + 1);
            if (idx < 0) idx = -idx - 1;

            int val = events[i][2];
            if (idx < n) val += suffix[idx];
            res = Math.max(res, val);
        }
        return res;
    }
}
