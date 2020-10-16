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

const int MAX = 1004;
const int oo = 1e18;
vector<int> lista[MAX];
map<pii,ll> dp;
int t, n;

ll calc_dist(int i, int f){
    ll out;
    if(i == f) out = 1;
    else if(i < f){
        out = min(f-i-1, i+t-f+1);
    }
    else{
        out = min(t-i+f, i-f+1);
    }
    return out;
}

ll calculate(int i, int j){
    if(i == n) return 0;
    if(dp.count({i,j})) return dp[{i,j}];
    ll &ans = dp[{i,j}] = oo;
    for(int x = 0; x < lista[i].size(); x++){
        ans = min(ans, calculate(i+1,lista[i][x]) + calc_dist(j,lista[i][x]));
    }
    return ans;
}

int main(){
    fastIO;
    int lim, aux;
    cin >> t >> n;
    for(int i = 0; i < n; i++){
        cin >> lim;
        for(int j = 0; j < lim; j++){
            cin >> aux;
            lista[i].pb(aux);
        }
    }
    calculate(0, 0);
    cout << dp[{0,0}] << endl;
    return 0;
}
