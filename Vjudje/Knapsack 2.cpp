#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

const int MAX=100005;
const ll oo=1e18;
ll dp[105][MAX];
int weights[MAX];
int value[MAX];
int W,n;

/*ll bag(int i,int w){
    if(w>W) return 0;
    if(i==n) return 1;
    if(dp[i][i]!=-1) return dp[i][w];
    dp[i][w]=max(bag(i+1,w),bag(i+1,w+weights[i])+value[i]);
    return dp[i][w];
}*/

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int rta=0;
    memset(dp,0,sizeof(dp));
    cin >> n >> W;
    for(int i=0;i<n;i++){
        cin >> weights[i] >> value[i];
    }
    for(int i=1;i<MAX;i++){
        dp[0][i]=oo;
    }
    for(int i=0;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(j-value[i-1]>-1) dp[i][j]=min(dp[i-1][j],dp[i-1][j-value[i-1]]+weights[j-1]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    for(int i=1;i<MAX;i++){
        if(W<=dp[n-1][i] && rta<i) rta=i;
    }
    cout << rta << endl;
    //cout << bag(0,0) << endl;
    return 0;
}

