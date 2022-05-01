class Solution {
public:
    string addBinary(string a, string b) {
        int aSize = a.length() - 1;
        int bSize = b.length() - 1;
        int bin = 0;
        string answer;

        while (aSize >= 0 || bSize >= 0) {
            int sum = bin;
            if (aSize >= 0) {
                sum += a[aSize--] - '0';
            }
            if (bSize >= 0) {
                sum += b[bSize--] - '0';
            }

            bin = sum > 1 ? 1 : 0;
            answer.insert(0, to_string(sum % 2));
        }

        if (bin == 1) {
            answer.insert(0, "1");
        }
        return answer;
    }
};