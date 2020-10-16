#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

const int MAX=53;
ll dp[MAX][MAX][MAX];
int n,k,m;

ll codigos(int i,int j,int l){
    if(j>k) return 0;
    if(l>m) return 0;
    if(i+1==n && j==k) return 1;
    if(i+1==n) return 0;
    if(dp[i][j][l]!=-1) return dp[i][j][l];
    dp[i][j][l]=codigos(i+1,j,l+1)+codigos(i+1,j+1,1);
    return dp[i][j][l];
}

int main() {
    while(cin >> n){
        cin >> k >> m;
        memset(dp,-1,sizeof(dp));
        cout << codigos(0,1,1) << endl;
    }
    return 0;
}
