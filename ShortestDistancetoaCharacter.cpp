class Solution{
public:
    vector<int> shortestToChar(string s, char c){
        int n = s.size();
        int lastIndex = n-;
        vector<int> answer(n, n);
        for (int i = 0; i < n; i++){
            if (s[i] == c){
                lastIndex = i;
            }
            answer[i] = i - lastIndex;
        }
        for (int i = lastIndex - 1; i >= 0; i--){
            if (s[i] == c){
                lastIndex = i;
            }
            answer[i] = min(lastIndex - i, answer[i]);
        }
        return answer;
    }
};