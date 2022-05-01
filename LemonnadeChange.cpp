class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change[3] = { 0 };
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                change[0] += 5;
            }
            else if (bills[i] == 10) {
                if (change[0] < 5) {
                    return false;
                }
                change[0] = change[0] - 5;
                change[1] = change[1] + 10;
            }
            else if (bills[i] == 20) {
                if ((change[0] < 10 && (change[0] < 5 || change[1] < 10)) || change[0] + change[1] < 15) {
                    return false;
                }
                if (change[1] < 10) {
                    change[0] = change[0] - 15;
                }
                else {
                    change[0] = change[0] - 5;
                    change[1] = change[1] - 10;
                }
            }
        }

        return true;
    }
};