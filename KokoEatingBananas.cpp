class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > high) {
                high = piles[i];
            }
        }
        while (low < high) {
            int totalTime = 0;
            int mid = (low + high) / 2;
            for (int i = 0; i < piles.size(); i++) {
                int timeTakenForPile = piles[i] / mid;
                int extraHour = piles[i] % mid;
                if (extraHour > 0) {
                    timeTakenForPile++;
                }
                totalTime += timeTakenForPile;
                if (totalTime > h) {
                    break;
                }
            }
            if (totalTime <= h) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};