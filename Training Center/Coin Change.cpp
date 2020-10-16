#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

const int MAX=7490;
int dp[MAX][5];
int oo=100000;
int monedas[5]={1,5,10,25,50};
int n;

int coins(int valor,int mom){
    if(valor>n) return 0;
    if(valor==n) return 1;
    if(dp[valor][mom]!=-1) return dp[valor][mom];
    dp[valor][mom]=0;
    for(int i=mom;i<5;i++){
        dp[valor][mom]+=coins(valor+monedas[i],i);
    }
    return dp[valor][mom];
}

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    while(cin >> n){
        memset(dp,-1,sizeof(dp));
        cout << coins(0,0) << endl;
    }
    return 0;
}
