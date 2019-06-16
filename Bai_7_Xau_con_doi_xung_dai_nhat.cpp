// Source code : Thùy Trang Trần - Team4T's Leader
#include<bits/stdc++.h>

using namespace std;

int n;

string s;

int solve()
{
	int ans = 0;
	for (int i=0; i<n; i++) {
		int L = i, R = i, Len = 1;
		while (L-1 >= 0 && R+1 < n && s[L-1] == s[R+1]) {Len += 2; L--; R++;}
		ans = max(ans, Len);
	}
	for (int i=1; i<n; i++) {
		if (s[i-1] != s[i]) continue;
		int L = i-1, R = i, Len = 2;
		while (L-1 >= 0 && R+1 < n && s[L-1] == s[R+1]) {Len += 2; L--; R++;}
		ans = max(ans, Len);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;
	while (t--)
	{
		cin >> s;
		n = s.size();
		solve();
	}
	return 0;
}