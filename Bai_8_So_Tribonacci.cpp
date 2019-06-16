// Có tham khảo qua code của anh Trần Văn Tâm.
#include<bits/stdc++.h>

using namespace std;

const int maxn = 105;
long long mod = 1e15 + 7;

typedef vector<vector<long long>> vll;

long long mul(long long a, long long b)
{
	if(b == 0)
		return 0LL;
	if(b == 1)
		return a;
	long long c = mul(a,b>>1);
	c = 2 * c % mod;
	if(b&1)
		return (c + a)%mod;
	return c;
}

vll multiMatrix(vll mtA, vll mtB)
{
	int i, j, k;
	vll ans(4, vector<long long>(4, 0));
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 4; k++)
				ans[i][j] += mul(mtA[i][k],mtB[k][j]), ans[i][j] %= mod;
	return ans;
}

vll powMatrix(vll mt, int k)
{
	int i, j, n = mt.size();
	vll x(n, vector<long long>(n));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			x[i][j] = (i == j);
	while (k)
	{
		if (k & 1)
			x = multiMatrix(x, mt);
		mt = multiMatrix(mt, mt);
		k >>= 1;
	}
	return x;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vll matrix(4, vector<long long>(4, 0));
		matrix[0][1] = matrix[1][2] = 1;
		matrix[2][0] = matrix[2][1] = matrix[2][2] = 1;
		matrix[3][3] = matrix[3][2] = matrix[3][1] = matrix[3][0] = 1;
		matrix = powMatrix(matrix, n);
		cout << matrix[3][1] << endl;
	}
	return 0;
}