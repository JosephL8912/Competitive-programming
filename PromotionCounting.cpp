#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
	int bronzePre, bronzePost, silverPre, silverPro, goldPre, goldPost, platPre, platPost;
	
	cin >> bronzePre >> bronzePost;

	cin >> silverPre >> silverPro;

	cin >> goldPre >> goldPost;

	cin >> platPre >> platPost;

	int goldUpPlat = platPost - platPre;
	int silverUpGold = goldPost - goldPre + platPost - platPre;
	int bronzeUpSilver = silverPro - silverPre + goldPost - goldPre + platPost - platPre;
	cout << bronzeUpSilver << "\n" << silverUpGold << "\n" << goldUpPlat;
}
