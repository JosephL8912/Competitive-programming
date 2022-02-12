#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;
vector <string> a[30];
bool yes;

bool contain(int i, string s)
{
	return binary_search(a[i].begin(), a[i].end(), s);
}

int main()
{
	freopen("evolution.in", "r", stdin);
	freopen("evolution.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> k;
		while (k--) {
			cin >> s;
			a[i].push_back(s);
		}
		sort(a[i].begin(), a[i].end());
	}

	yes = true;

	for (int i = 1; i <= n && yes; ++i) {
		for (int j = i + 1; j <= n && yes; ++j) {
			vector <string> v[2];
			for (const string& s : a[i]) {
				if (!contain(j, s)) {
					v[0].push_back(s);
				}
			}
			for (const string& s : a[j]) {
				if (!contain(i, s)) {
					v[1].push_back(s);
				}
			}
			for (int k = 0; k < v[0].size() && yes; ++k) {
				for (int l = 0; l < v[1].size() && yes; ++l) {
					for (int z = 1; z <= n; ++z) {
						if (z != i && z != j) {
							if (contain(z, v[0][k]) && contain(z, v[1][l])) {
								yes = false;
								break;
							}
						}
					}
				}
			}
		}
	}

	if (yes == true) {
		cout << "yes" << "\n"
	}
	else {
		cout << "no" << "\n"
	}
}