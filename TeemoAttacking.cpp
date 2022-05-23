class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int answer = 0;
        for (int i = 0; i < timeSeries.size() - 1; i++) {
            answer += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        answer += duration; 
        return answer;
    }
};