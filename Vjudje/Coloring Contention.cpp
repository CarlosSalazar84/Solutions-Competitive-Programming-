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

const int MAX = 1e5+4;
vector<int> g[MAX];
int dist[MAX];
int m, n;

void bfs(int u){
    queue<int> q;
    q.push(u);
    dist[u] = 0;

    while(q.size()){
        u = q.front();
        q.pop();

        for(auto &v:g[u]){
            if(dist[v] == -1){
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
}

int main(){
    memset(dist, -1, sizeof(dist));
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    bfs(1);
    cout << dist[n]-1 << endl;
    return 0;
}

