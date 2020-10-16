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
typedef pair<ll,int> plli;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);


const int MAX = 1004;
vector<pii> g[MAX];
bool used[MAX];
ll dist[MAX];
ll dp[MAX];
int n, m;

void dijkstra(plli u){
    priority_queue<plli, vector<plli>, greater<plli>> q;
    q.push(u);

    while(q.size()){
        u = q.top();
        q.pop();

        if(!used[u.sd]){
            dist[u.sd] = u.ft;
            used[u.sd] = true;

            for(auto &v : g[u.sd]){
                q.push({u.ft + v.ft, v.sd});
            }
        }
    }
}

ll dfs(int u){
    if(u == 2) return 1;
    if(dp[u] != -1) return dp[u];
    dp[u] = 0;
    for(auto &v : g[u]){
        if(dist[v.sd] < dist[u]){
            dp[u] += dfs(v.sd);
        }
    }
    return dp[u];
}

void init(){
    memset(dp, -1, sizeof(dp));
    memset(dist, -1, sizeof(dist));
    memset(used, 0, sizeof(used));
    for(int i = 0; i <= n; i++){
        g[i].clear();
    }
}

int main(){
    int a, b, w;
    ll rta;
    while(cin >> n){
        if(!n) break;
        cin >> m;
        init();
        for(int i = 0; i < m; i++){
            cin >> a >> b >> w;
            g[a].pb({w, b});
            g[b].pb({w, a});
        }
        dijkstra({0,2});
        rta = dfs(1);
        cout << rta << endl;
    }
    return 0;
}
