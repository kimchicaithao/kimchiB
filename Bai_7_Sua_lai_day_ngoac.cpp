#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5;

string s;
long long a[maxn], b[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin>>t;
    while (t--) {
        cin >> s;
        long long d = 0, ans = 0;
        int i;
        for (i = 0; i < s.size(); i++)
            if (s[i] == '(') {
                if (d < 0) {
                    d = -d;
                    ans = ans + d / 2;
                    if (d % 2) {
                        d = 2;
                        ans++;
                    } else d = 1;
                } else d++;
            }
        else d--;
        if (d < 0) d = -d;
        if (d % 2) d++;
        ans += d / 2;
        cout << ans << endl;
    }
    return 0;
}