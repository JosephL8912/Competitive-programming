#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, k;
    cin >> T;
    for (k = 0; k < T; k++) {
        string S;
        cin >> S;
        int count = 0; 
        int sub[S.size()];
        int ind = 0;
        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '1') {
                count++;
            }
            else {
                if (count > 0) {
                    sub[ind] = count;
                    ind++;
                    count = 0;
                }
            }
        }
        if (count > 0) {
            sub[ind] = count;
            ind++;
            count = 0;
        }
        sort(sub, sub + ind);
        int answer = 0;
        for (int i = ind - 1; i >= 0; i -= 2) {
            answer += sub[i];
        }
        cout << answer << "\n";
    }
}
