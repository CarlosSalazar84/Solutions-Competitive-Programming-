#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

const int MAX1=5122;
const int MAX2=31;
int dp[MAX1][MAX2];
int pesos[MAX1];
int canciones[MAX2];
int n,k;

int nube(int i,int K){
    if(i==n) return 0;
    if(K<pesos[i]) return nube(i+1,K);
    if(dp[K][i]!=-1) return dp[K][i];
    dp[K][i]=max(nube(i+1,K),nube(i+1,K-pesos[i])+canciones[i]);
    return dp[K][i];
}

int main() {
    int t,rta;
    cin >> t;
    for(int i=0;i<t;i++){
        memset(dp,-1,sizeof(dp));
        cin >> n >> k;
        k*=1024;
        for(int j=0;j<n;j++){
            cin >> canciones[j];
        }
        for(int j=0;j<n;j++){
            cin >> pesos[j];
        }
        rta=nube(0,k);
        cout << rta << endl;
    }
    return 0;
}
