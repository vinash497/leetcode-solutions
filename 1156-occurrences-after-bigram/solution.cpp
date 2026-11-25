 class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        int i = 0, n = text.size();
        while (i < n) {
            string temp = "";
            while (i < n && text[i] >= 'a' && text[i] <= 'z') {
                temp += text[i];
                i++;
            }
            int idx1 = i;
            if (temp == first) {

                i++;
                temp = "";
                while (i < n && text[i] >= 'a' && text[i] <= 'z') {
                    temp += text[i];
                    i++;
                }
                if (temp == second) {
                    i++;
                    temp = "";
                    while (i < n && text[i] >= 'a' && text[i] <= 'z') {
                        temp += text[i];
                        i++;
                    }
                    if (temp != "")
                        ans.push_back(temp);
                }
            }
            i = idx1;
            // Only single space is present so just increment i
            i++;
        }
        return ans;
    }
};
