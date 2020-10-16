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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int mod = 1e9+7;
const int MAX = 1e5+4;
vector<int> g[MAX];
int cost[MAX];
int vist[MAX];
vector<int> topoSort;
vector<vector<int>> SCC;
int n, m;

void dfs(int u){
    vist[u]++;
    for(auto &v : g[u]){
        if(!vist[v]) dfs(v);
    }
    topoSort.pb(u);
}

void kosaraju(int u, int i){
    cout << u << " " << i << endl;
    vist[u]++;
    SCC[i].pb(u);
    for(auto &v : g[u]){
        if(vist[v] == 1) kosaraju(v, i);
    }
}

int main(){
    int u, v, lim, pos = 0;
    ll costFinal = 0, rta = 1;
    vector<int> out;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> cost[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        g[u].pb(v);
    }
    for(int i = 1; i <= n; i++){
        if(!vist[i]) dfs(i);
    }
    reverse(topoSort.begin(), topoSort.end());
    lim = topoSort.size();

    for(int i = 0; i < lim; i++){
        if(vist[i] == 1){
            cout << "ENTRA " << i << endl;
            vector<int> aux;
            SCC.pb(aux);
            kosaraju(i, pos);
            pos++;
        }
    }

    for(int i = 0; i < SCC.size(); i++){
        int cnt = 0;
        ll aux = 2e9;
        for(auto &x : SCC[i]){
            if(cost[x] < aux){
                cnt = 1;
                aux = cost[x];
            }
            else if(cost[x] == aux) cnt++;
        }
        out.pb(cnt);
        rta += aux;
    }
    for(auto &x : out) rta = (rta * x)%mod;
    cout << costFinal << " " << rta << endl;
    return 0;
}
