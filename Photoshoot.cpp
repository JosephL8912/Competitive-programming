#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char str[200000];
    cin >> str + 1;

    int answer = 0;
    for (int index = N; index >= 2; index -= 2)
    {
        if (str[index] == str[index - 1])
            continue;

        if (str[index] == 'G' && answer % 2 == 1)
            answer++;

        if (str[index] == 'H' && answer % 2 == 0)
            answer++;
    }

    cout << answer;
}