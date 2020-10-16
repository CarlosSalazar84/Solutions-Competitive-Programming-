#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

const int MAX=53;
ll dp[MAX][MAX];
int n,k,m;

ll codigos(int i,int j){
    if(i>n) return 0;
    if(j>k) return 0;
    if(i==n && j==k) return 1;
    if(i==n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    dp[i][j]=0;
    for(int x=1;x<=m;x++){
        dp[i][j]+=codigos(i+x,j+1);
    }
    return dp[i][j];
}

int main() {
    while(cin >> n){
        cin >> k >> m;
        memset(dp,-1,sizeof(dp));
        cout << codigos(0,0) << endl;
    }
    return 0;
}
