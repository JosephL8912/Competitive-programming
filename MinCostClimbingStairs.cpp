class Solution {
public:
    unordered_map<int, int> costs; 
    int findPrice(vector<int>& cost, int idx) {
        if (idx >= cost.size() - 2) {
            return cost[idx];
        }
        if (costs.count(idx) > 0) {
            return costs[idx];
        }
        int price = cost[idx] + min(findPrice(cost, idx + 1), findPrice(cost, idx + 2));
        costs[idx] = price;
        return price;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(findPrice(cost, 0), findPrice(cost, 1));
    }
};