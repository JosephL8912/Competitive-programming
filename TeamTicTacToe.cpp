#include <bits/stdc++.h>
using namespace std;
char game[3][3];
int cowWin(char char1)
{
    if (game[0][0] == char1 && game[1][1] == char1 && game[2][2] == char1) {
        return 1;
    }
    else if (game[0][2] == char1 && game[1][1] == char1 && game[2][0] == char1) {
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        if (game[0][i] == char1 && game[1][i] == char1 && game[2][i] == char1) {
            return 1;
        }
        else if (game[i][0] == char1 && game[i][1] == char1 && game[i][2] == char1) {
            return 1;
        }
    }

    return 0;
}
bool check(char char1, char char2, char a, char b, char c)
{
    if (a != char1 && a != char2) {
        return false;
    }
    else if (b != char1 && b != char2) {
        return false;
    }
    else if (c != char1 && c != char2) {
        return false;
    }
    else if (a != char1 && b != char1 && c != char1) {
        return false;
    }
    else if (a != char2 && b != char2 && c != char2) {
        return false;
    }

    return true;
}
int team_wins(char char1, char char2)
{
    if (check(char1, char2, game[0][0], game[1][1], game[2][2])) {
        return 1;
    }
    else if (check(char1, char2, game[0][2], game[1][1], game[2][0])) {
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        if (check(char1, char2, game[0][i], game[1][i], game[2][i])) {
            return 1;
        }
        else if (check(char1, char2, game[i][0], game[i][1], game[i][2])) {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> game[i][j];

    int answer1 = 0, answer2 = 0;
    for (char char1 = 'A'; char1 <= 'Z'; char1++)
        answer1 += cowWin(char1);
    for (char char1 = 'A'; char1 <= 'Z'; char1++)
        for (char char2 = char1 + 1; char2 <= 'Z'; char2++)
            answer2 += team_wins(char1, char2);

    cout << answer1 << "\n" << answer2 << "\n";
}