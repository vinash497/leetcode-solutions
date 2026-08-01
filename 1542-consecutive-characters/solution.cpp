class Solution {
public:
    int maxPower(string s) {
        if(s.size() <= 1) return s.size();
        int len = 1,cnt = 1;
        for(int i = 1;i < s.size();i++){
            if(s[i - 1] == s[i]){ cnt++;
            len = max(len,cnt);
            }
            else cnt = 1;
        } 
        return len;
    }
};
