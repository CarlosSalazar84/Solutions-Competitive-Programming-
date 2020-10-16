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


const int MAX = 5004;
vector<int> g[MAX], ig[MAX];
set<int> ug[MAX];
int used[MAX];
vector<int> topoSort;
vector<vector<int>> SSC;
int n, m;

void dfs(int u){
    used[u]++;
    for(auto &v : g[u]){
        if(!used[v]) dfs(v);
    }
    topoSort.pb(u);
}

void kosaraju(int u, int p){
    SSC[p].pb(u);
    used[u]++;
    for(auto &v : ig[u]){
        if(used[v] == 1) kosaraju(v, p);
    }
}

int main(){
    int a, b, cnt = 0;
    ll d = 0, rta;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        ug[a].insert(b);
    }
    cin >> d;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) continue;
            if(!ug[i].count(j)) g[i].pb(j);
        }
    }
    for(int i = 1; i <= n; i++){
        if(!used[i]) dfs(i);
    }

    for(int i = 1; i <= n; i++){
        for(auto &x : g[i]) ig[x].pb(i);
    }
    reverse(topoSort.begin(),topoSort.end());
    for(int i = 0; i < n; i++){
        if(used[topoSort[i]] == 1){
            vector<int> aux;
            SSC.pb(aux);
            kosaraju(topoSort[i], cnt);
            cnt++;
        }
    }
    rta = SSC.size()*d;
    cout << rta << endl;
    return 0;
}
