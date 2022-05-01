class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int capa = capacity;
        int answer = 0;
        for (int i = 0; i < plants.size(); i++) {
            if (plants[i] <= capa) {
                capa = capa - plants[i];
                answer++;
            }
            else if (plants[i] > capa) {
                capa = capacity - plants[i];
                answer = answer + (2 * i + 1);
            }
        }
        return answer;
    }
};