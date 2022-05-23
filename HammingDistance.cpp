class Solution {
public:
    int hammingDistance(int x, int y) {
        int Xor = x ^ y;
        int answer = 0;
        while (Xor) {
            Xor = Xor & (Xor - 1);
            answer++;
        }
        return answer;
    }
};