#include<bits/stdc++.h>

using namespace std;

bool invalid(int r1, int c1, int r2, int c2){
    return abs(r1 - r2) == abs(c1 - c2);
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    vector<vector<int>> validOrder;
    vector<int> a;
    int i,j;
    for(i = 0;i<8;i++)
    	a.emplace_back(i);
    do{
        int valid = 1;
    	for(i = 0;i<8 && invalid;i++)
            for(j = i + 1;j<8;j++)
                if(invalid(i,a[i],j,a[j]))
                {
                    valid = 0;
                    break;
                }
        if(valid)
            validOrder.emplace_back(a);
    }
    while(next_permutation(a.begin(),a.end()));
    int t;
    cin>>t;
    while(t--)
    {
    	int ans = 0,board[8][8];
    	for(i = 0;i<8;i++)
    		for(j = 0;j<8;j++)
    			cin>>board[i][j];
    	for(auto i:validOrder)
        {
            int temp = 0;
            for(j = 0;j<8;j++)
                temp+= board[j][i[j]];
            ans = max(ans, temp);
        }
    	cout<<ans<<endl;
    }
    return 0;
}