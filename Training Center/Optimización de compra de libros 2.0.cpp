#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

const int MAX=153;
int dp[MAX][MAX];
int precios[MAX];
int valores[MAX];
int n;

int miltonxd(int i,int dinero){
    if(i>=n) return 0;
    if(precios[i]>dinero) return miltonxd(i+1,dinero);
    if(dp[i][dinero]!=-1) return dp[i][dinero];
    int a,b;
    a=miltonxd(i+1,dinero);
    b=miltonxd(i+1,dinero-precios[i])+valores[i];
    if(b>a){
        valores[i]=0;
        precios[i]=0;
    }
    dp[i][dinero]=max(a,b);
    return dp[i][dinero];
}

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        memset(dp,-1,sizeof(dp));
        int m,c,k,rta;
        cin >> n >> m >> c >> k;
        for(int j=0;j<n;j++){
            cin >> precios[j];
        }
        for(int j=0;j<n;j++){
            cin >> valores[j];
        }
        rta=miltonxd(0,m);
        cout << rta << endl;
    }
    return 0;
}
