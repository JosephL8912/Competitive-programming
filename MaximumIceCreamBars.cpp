class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int counter = 0, i = 0;
        while (coins > 0 && i < costs.size()) {
            coins -= costs[i++];
            if (coins >= 0) {
                counter++;
            }
        }
        return counter;
    }
};