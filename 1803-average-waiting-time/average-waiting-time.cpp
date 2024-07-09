class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double currentTime = 0;
        double totalWaitTime = 0;
        for (int i = 0; i < customers.size(); ++i) {
            int arrivalTime = customers[i][0];
            int cookingTime = customers[i][1];
            if (currentTime < arrivalTime) {
                currentTime = arrivalTime;
            }
            totalWaitTime += (currentTime - arrivalTime) + cookingTime;
            currentTime += cookingTime;
        }
        return totalWaitTime / customers.size();
    }
};
