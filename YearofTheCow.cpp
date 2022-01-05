#include <bits/stdc++.h>
using namespace std;

string animals[12] = { "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat" };

map<string, int> birthYear;

string getAnimalYear(int year)
{
    int a = 0, y = 2021;
    while (y < year) { 
        y++; a++; if (a == 12) a = 0; 
    }
    while (y > year) { 
        y--; a--; if (a == -1) a = 11; 
    }
    return animals[a];
}

int main(void)
{
    int N;
    birthYear["Bessie"] = 2021;
    cin >> N;
    string cow1, born, in, relation, animal, year, from, cow2;
    for (int i = 0; i < N; i++) {
        cin >> cow1 >> born >> in >> relation >> animal >> year >> from >> cow2;
        birthYear[cow1] = birthYear[cow2];
        do {
            if (relation == "previous") {
                birthYear[cow1]--;
            }
            else {
                birthYear[cow1]++;
            }
        } 
        while (getAnimalYear(birthYear[cow1]) != animal);
    }
    int answerw = birthYear["Bessie"] - birthYear["Elsie"];
    if (answerw < 0) {
        answerw = -answerw;
    }
    cout << answerw << "\n";
}