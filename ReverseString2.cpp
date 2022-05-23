class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.length();
        int index = 0;
        while (index <= s.length()) {
            if (k >= size) {
                reverse(s.begin() + index, s.end());
            }
            else if (k < size && 2 * k >= size) {
                reverse(s.begin() + index, s.begin() + index + k);
            }
            else if (k < size && 2 * k <= size) {
                reverse(s.begin() + index, s.begin() + index + k);
            }
            size -= 2 * k;
            index += 2 * k;
        }
        return s;
    }
};