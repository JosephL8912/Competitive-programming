#include <bits/stdc++.h>
using namespace std;

vector<string> order{ "Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue" };
vector<pair<string, string> > a;
int n;
int main()
{
	freopen("lineup.in", "r", stdin);
	freopen("lineup.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		pair<string, string> p;
		string d;
		cin >> p.first >> d >> d >> d >> d >> p.second;
		a.push_back(p);
	}
	do
	{
		bool add = true;
		for (int i = 0; i < a.size(); i++)
		{
			int loc = find(order.begin(), order.end(), a[i].first) - order.begin();
			bool works = ((loc == 0 && a[i].second == order[1]) || (loc == 7 && a[i].second == order[6]) || (a[i].second == order[loc - 1] || a[i].second == order[loc + 1]));
			if (!(works))
			{
				add = works;
			}
		}
		if (add) {
			break;
		}
	} while (next_permutation(order.begin(), order.end()));
	for (auto& answer : order)
	{
		cout << answer << "\n";
	}
}