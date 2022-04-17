#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        set<char> S;
        string s; 
        cin >> s;
        int n = s.size();
        int removed = 0;
        for (int i = 0; i < n; i++)
        {
            if (S.count(s[i]))
            {
                removed += 2;
                S.clear();
            }
            else {
                S.insert(s[i]);
            }
        }
        cout << n - removed << "\n";
    }
}