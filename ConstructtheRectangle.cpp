class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> answer;
        int w = 1;
        for (int i = 1; i <= sqrt(area); i++) {
            if (area % i == 0) {
                w = i;
            }
        }
        answer.push_back(area / w);
        answer.push_back(w);
        return answer;
    }
};