class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int minPile = min({ a,b,c });
        int score = 0;
        if (minPile == a) {
            while (a > 0) {
                if (b > c) {
                    b--;
                    a--;
                    score++;
                }
                else {
                    c--;
                    a--;
                    score++;
                }
            }
            score += min(b, c);
        }
        else if (minPile == b) {
            while (b > 0) {
                if (a > c) {
                    a--;
                    b--;
                    score++;
                }
                else {
                    c--;
                    b--;
                    score++;
                }
            }
            score += min(a, c);
        }
        else if (minPile == c) {
            while (c > 0) {
                if (b > a) {
                    b--;
                    c--;
                    score++;
                }
                else {
                    c--;
                    a--;
                    score++;
                }
            }
            score += min(b, a);
        }
        return score;
    }
};