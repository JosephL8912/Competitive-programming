class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int answer = 0, sumPrevFuels = 0, currentFuel = 0;
        for (int i = 0; i < gas.size(); i++) {
            currentFuel += gas[i] - cost[i];
            if (currentFuel < 0) {
                sumPrevFuels += currentFuel;
                currentFuel = 0;

                answer = (i + 1);
            }
        }

        if (currentFuel + sumPrevFuels >= 0) {
            return answer;
        }
        return -1;
    }
};