class Solution {
public:
    int findTheWinner(int n, int k) {
        vector <int> circle; 
        int person = 0;
        for (int i = 1; i <= n; i++) {
            circle.push_back(i);
        }
        while (circle.size != 1) {
            int count = 1;
            while (count < k) {
                person = (person + 1) % circle.size();
                count++;
            }
            circle.erase(circle.begin() + person);
        }
        return circle[0];
    }
};