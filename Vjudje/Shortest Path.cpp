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


const int MAX = 1e5+4;
vector<pii> g[MAX];
bool used[MAX];
pii dist[MAX];
int n, m;

void dijkstra(piii u){
    priority_queue<piii, vector<piii>, greater<piii>> q;
    q.push(u);

    while(q.size()){
        u = q.top();
        q.pop();

        if(!used[u.ft.sd]){
            dist[u.ft.sd] = {u.ft.ft, u.sd};
            used[u.ft.sd] = true;

            for(auto &v:g[u.ft.sd]){
                q.push({{u.ft.ft + v.ft, v.sd}, u.ft.sd});
            }
        }
    }
}

int main(){
    int a, b, w, aux, lim;
    vector<int> path;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> w;
        g[a].pb({w, b});
        g[b].pb({w, a});
    }
    dijkstra({{0, 1}, 1});
    if(!dist[n].ft && !dist[n].sd) cout << -1 << endl;
    else{
        path.pb(n);
        aux = n;
        while(aux != dist[aux].sd){
            path.pb(dist[aux].sd);
            aux = dist[aux].sd;
        }

        lim = path.size();
        for(int i = lim-1; i >= 0; i--){
            if(i) cout << path[i] << " ";
            else cout << path[i] << endl;
        }
    }
    return 0;
}
