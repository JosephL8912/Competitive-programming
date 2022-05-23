class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sizeOfGarden = flowerbed.size();
        int numFlower = 0;
        for (int i = 0; i < sizeOfGarden; i++) {
            if (flowerbed[i] == 0 and (i == 0 or flowerbed[i - 1] == 0) and (i == sizeOfGarden - 1 or flowerbed[i + 1] == 0)) {
                numFlower++;
                flowerbed[i] = 1;
                i++;
            }
            if (numFlower >= n) {
                return true;
            }
        }
        return numFlower >= n;
    }
};