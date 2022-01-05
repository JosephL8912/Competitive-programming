#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int odd = 0, even = 0, N, x;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    while (odd > even) { 
        odd = odd - 2; 
        even++; 
    }
    if (even > odd + 1) {
        even = odd + 1;
    }
    cout << even + odd << "\n";
}