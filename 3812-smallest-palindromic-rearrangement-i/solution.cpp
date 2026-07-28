class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        // Count frequency
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        char middle = ' ';

        // Build left half using half of each character frequency
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) {
                middle = char(i + 'a');
            }

            left += string(freq[i] / 2, char(i + 'a'));
        }

        // Create right half by reversing left
        string right = left;
        reverse(right.begin(), right.end());

        // Combine
        if (middle != ' ')
            return left + middle + right;

        return left + right;
    }
};
