class Solution {
public:
    static bool sorting(vector<int>& h, vector<int>& inFront)
    {
        if (h[0] == inFront[0]) {
            return h[1] < inFront[1];
        }
        return h[0] > inFront[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size();
        sort(people.begin(), people.end(), sorting);
        vector<vector<int>> answer;
        answer.push_back(people[0]);
        for (int i = 1; i < n; i++)
        {
            int index = people[i][1];
            answer.insert(answer.begin() + index, people[i]);
        }
        return answer;
    }
};