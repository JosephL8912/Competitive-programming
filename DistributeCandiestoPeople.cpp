class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector <int> answer(num_people);
        int current = 1;
        while (candies > 0){
            for (int i = 0; i < num_people; i++){
                if (candies <= 0) {
                    break;
                }
                if (current > candies) {
                    current = candies;
                }
                answer[i] += current;
                candies -= current;
                current++;
            }
            if (current > candies) {
                current = candies;
            }
        }
        return answer;
    }
};