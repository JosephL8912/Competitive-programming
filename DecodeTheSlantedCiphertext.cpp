#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeCiphertext(string str, int r) {
        int col = str.size() / r;
        string answer;
        for (int i = 0; i < col; ++i) { 
            for (int j = i, k = 0; j < col && k < r; j++, k++) {
                answer += str[k * col + j];
            }
        }
        while (answer.size() && answer.back() == ' ') {
            answer.pop_back();
        }
        return answer;
    }
};