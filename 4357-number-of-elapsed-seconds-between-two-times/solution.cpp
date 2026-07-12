class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        auto toSeconds = [](string t){
            return stoi(t.substr(0,2))*3600 + stoi(t.substr(3,2)) * 60 + stoi(t.substr(6,2));
        };
        return toSeconds(endTime) - toSeconds(startTime);
    }
};
