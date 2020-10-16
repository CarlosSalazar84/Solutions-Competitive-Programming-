#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

const int MAX=1e5+3;
int dp[MAX];
string s;
int n;

int puntos(int i){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
    dp[i]=max(puntos(i+1),puntos(i+(int)(s[i]-96))+(int)(s[i]-96));
    return dp[i];
}

int main() {
    int rta;
    while(cin >> n){
        cin >> s;
        memset(dp,-1,sizeof(dp));
        rta=puntos(0);
        cout << rta << endl;
    }
    return 0;
}
