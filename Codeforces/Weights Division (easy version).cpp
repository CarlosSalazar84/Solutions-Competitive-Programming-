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
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int MAX=100005;
vector<pii> g[MAX];
priority_queue<pair<ll,pll>> values;
bool vis[MAX];
ll sum;
int n;

ll dfs(int u,int w){
    ll aux=0;
    vis[u]=true;
    bool add=true;
    for(auto v:g[u]){
        if(!vis[v.ft]){
            add=false;
            aux+=dfs(v.ft,v.sd);
        }
    }
    if(add) aux++;
    sum+=w*aux;
    values.push({w*aux,{aux,w}});
    return aux;
}

void init(){
    while(values.size()){
        values.pop();
    }
    for(int i=0;i<=n;i++){
        g[i].clear();
        vis[i]=false;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int s,u,v,w;
        ll rta=0;
        sum=0;
        cin >> n >> s;
        for(int i=0;i<n-1;i++){
            cin >> v >> u >> w;
            g[v].pb({u,w});
            g[u].pb({v,w});
        }
        dfs(1,0);
        while(sum>s){
            rta++;
            ll aux;
            auto ext=values.top();
            values.pop();
            aux=ext.sd.sd/2;
            ll change=aux*ext.sd.ft;
            sum-=ext.ft-change;
            pair<ll,pll> in={change,{ext.sd.ft,aux}};
            values.push(in);
        }
        cout << rta << endl;
        init();
    }
    return 0;
}
