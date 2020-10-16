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
typedef pair<bool,bool> pbb;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

const int MAX = 104;
const int mod = 1e9+7;

ll dp[MAX][MAX][MAX];
int m, n, o;
string p, r, s, t;

ll calculate(int pos, int i, int j, int k){
    if(i == m && j == n && k == o) return 1;
    if(dp[i][j][k] != -1) return dp[i][j][k];
    dp[i][j][k] = 0;
    if(i != m && p[pos] == r[i]){
        dp[i][j][k] = (dp[i][j][k] + calculate(pos+1, i+1, j, k))%mod;
    }
    if(j != n && p[pos] == s[j]){
        dp[i][j][k] = (dp[i][j][k] + calculate(pos+1, i, j+1, k))%mod;
    }
    if(k != o && p[pos] == t[k]){
        dp[i][j][k] = (dp[i][j][k] + calculate(pos+1, i, j, k+1))%mod;
    }
    return dp[i][j][k];
}

int main(){
    fastIO;
    memset(dp, -1, sizeof(dp));
    ll rta;
    cin >> r >> s >> t >> p;
    m = r.size();
    n = s.size();
    o = t.size();
    rta = calculate(0,0,0,0);
    cout << rta << endl;
    return 0;
}
