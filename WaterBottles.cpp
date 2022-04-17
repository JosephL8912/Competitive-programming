class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int answer, empty;
        answer = empty = 0;

        while (numBottles > 0)
        {
            answer += numBottles; 
            empty += numBottles; 
            numBottles = empty / numExchange; 
            empty %= numExchange; 
        }
        return answer;
    }
};