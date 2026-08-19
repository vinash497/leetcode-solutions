class Solution {
public:
    char findTheDifference(std::string& s, std::string& t) {
        // Intuition: sort both strings and find first mismatch
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        int i = 0;
        while (i < s.length() && s[i] == t[i]) {
            i++;
        }
        return t[i];
    }
};