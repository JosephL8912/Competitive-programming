#include <bits/stdc++.h>
using namespace std;

int possibleAnwers[2000];

void friday(int b1milk, vector<int> B1, vector<int> B2)
{
    for (int i = 0; i < B2.size(); i++) {
        int x = B2[i];
        possibleAnwers[b1milk + x] = 1; 
    }
}

void thursday(int bucket1Milk, vector<int> bucket1, vector<int> bucket2)
{
    for (int i = 0; i < bucket1.size(); i++) {
        int x = bucket1[i];
        vector<int> newBucket2 = bucket2; newBucket2.push_back(x);
        vector<int> newBucket1 = bucket1; newBucket1.erase(newBucket1.begin() + i);
        friday(bucket1Milk - x, newBucket1, newBucket2);
    }
}

void wednesday(int bucket1Milk, vector<int> bucket1, vector<int> bucket2)
{
    for (int i = 0; i < bucket2.size(); i++) {
        int x = bucket2[i];
        vector<int> newBucket1 = bucket1; newBucket1.push_back(x);
        vector<int> newBucket2 = bucket2; newBucket2.erase(newBucket2.begin() + i);
        thursday(bucket1Milk + x, newBucket1, newBucket2);
    }
}

void tuesday(int bucket1Milk, vector<int> bucket1, vector<int> bucket2)
{
    for (int i = 0; i < bucket1.size(); i++) {
        int x = bucket1[i];
        vector<int> newBucket2 = bucket2; newBucket2.push_back(x);
        vector<int> newBucket1 = bucket1; newBucket1.erase(newBucket1.begin() + i);
        wednesday(bucket1Milk - x, newBucket1, newBucket2);
    }
}

int main(void)
{
    int n, answer = 0;
    vector<int> bucket1, bucket2;
    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);
    for (int i = 0; i < 10; i++) { 
        cin >> n; bucket1.push_back(n); 
    }
    for (int i = 0; i < 10; i++) { 
        cin >> n; bucket2.push_back(n); 
    }

    tuesday(1000, bucket1, bucket2);
    for (int i = 0; i < 2000; i++) {
        answer += possibleAnwers[i];
    }
    cout << answer << "\n";
}