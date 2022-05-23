class Solution {
public:
    int findComplement(int num) {
        vector<int> num2;
        while (num > 0) {
            num2.push_back(num % 2);
            num /= 2;
        }
        reverse(num2.begin(), num2.end());
        for (int i = 0; i < num2.size(); i++)
            if (num2[i] == 0) {
                num2[i] = 1;
            }
            else {
                num2[i] = 0;
            }
        int answer = 0;
        long int b = 1;
        for (int i = num2.size() - 1; i >= 0; i--) {
            if (num2[i] == 1) {
                answer += num2[i] * b;
            }
            b *= 2;
        }
        return answer;
    }
};