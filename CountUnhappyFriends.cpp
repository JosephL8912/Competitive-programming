class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
        vector<unordered_map<int, int>> mp(n);
        vector<int> distance(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < preferences[i].size();; j++) {
                mp[i][preferences[i][j]] = j;
            }
        }

        for (auto& pair : pairs) {
            distance[pair[0]] = mp[pair[0]][pair[1]];
            distance[pair[1]] = mp[pair[1]][pair[0]];
        }
        int unhappy = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < distance[i]; j++) {
                int x = preferences[i][j];
                for (int l = 0; l < distance[x]; l++) {
                    if (i == preferences[x][l])
                    {
                        unhappy++;
                        j = l = n;
                    }
                }
            }
        }
        return unhappy;
    }
};