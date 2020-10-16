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

const int MAX = 104;
vector<int> g[MAX];
bool vis[MAX];
vector<int> path;
int n, m;

void dfs(int u){
    vis[u] = true;
    for(auto &v : g[u]){
        if(!vis[v]) dfs(v);
    }
    path.pb(u);
}

void init(){
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i <= n; i++){
        g[i].clear();
    }
    path.clear();
}

int main(){
    while(cin >> n >> m){
        if(!n && !m) break;
        int a, b, lim;
        for(int i = 0; i < m; i++){
            cin >> a >> b;
            g[a].pb(b);
        }
        for(int i = 1; i <= n; i++){
            if(!vis[i]) dfs(i);
        }
        reverse(path.begin(), path.end());
        lim = path.size();
        for(int i = 0; i < lim; i++){
            if(i+1 != lim) cout << path[i] << " ";
            else cout << path[i] << endl;
        }
        init();
    }
    return 0;
}
