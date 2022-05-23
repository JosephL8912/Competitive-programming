class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int types = candyType.size();
        int counter = 0;
        unordered_map<int, bool> uniqueCandy;
        for (int i = 0; i < types; i++) {
            if (uniqueCandy[candyType[i]] == false) {
                counter++;
            }
            uniqueCandy[candyType[i]] = true;
        }
        return min(types/2, counter);
    }
};