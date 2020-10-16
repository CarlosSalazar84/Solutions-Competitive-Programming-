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
const int oo=1000000009;
int dp[MAX];

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int n,k;
    memset(dp,-1,sizeof(dp));
    cin >> n >> k;
    int alturas[n];
    for(int i=0;i<n;i++){
        cin >> alturas[i];
    }
    dp[0]=0;
    for(int i=1;i<n;i++){
        dp[i]=oo;
        for(int j=1;j<=k;j++){
            if(i-j>-1) dp[i]=min(dp[i],dp[i-j]+abs(alturas[i]-alturas[i-j]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}

