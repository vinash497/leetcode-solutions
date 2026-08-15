class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int currentFloor = 0,total = 0;
        for(int i = 0;i < requests.size();i++){
            int requestedFloor = requests[i];
            total += abs(currentFloor - requestedFloor);
            currentFloor = requestedFloor;
        }
        return total;
    }
};
