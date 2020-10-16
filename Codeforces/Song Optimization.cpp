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

#define INF (1ll<<62)

struct edge {
    int v;
    long long w;

    bool operator < (const edge &b) const {
        return w > b.w; //Orden invertido
    }
};

const int MAX = 100005; //Cantidad maxima de nodos
vector<edge> g[MAX]; //Lista de adyacencia
bitset<MAX> vis; //Marca los nodos ya visitados
int pre[MAX]; //Almacena el nodo anterior para construir las rutas
long long dist[MAX]; //Almacena la distancia a cada nodo
int k, M; //Cantidad de nodos y aristas

void dijkstra(int u) {
    priority_queue<edge> pq;
    pq.push({u,0});
    dist[u]=0;

    while(pq.size()){
        u=pq.top().v;
        pq.pop();
        if(!vis[u]){
            vis[u]=true;
            for(auto nx:g[u]){
                int v=nx.v;
                if(!vis[v] && dist[v] > dist[u] + nx.w) {
                    dist[v]=dist[u]+nx.w;
                    pre[v]=u;
                    pq.push({v,dist[v]});
                }
            }
        }
    }
}

void init(){
    for(int i=0;i<=k;i++){
        dist[i]=INF;
        vis[i]=false;
    }
}

int main(){
    int n,aux,temp,dif;
    ll rta=0;
    cin >> n >> k;
    int inst[n],cost[k][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cin >> aux;
            g[i].pb({j,aux});
        }
    }
    for(int i=0;i<n;i++){
        cin >> inst[i];
        inst[i]--;
    }
    if(n==1 || k==1) cout << 0 << endl;
    else{
        for(int i=0;i<k;i++){
            init();
            dijkstra(i);
            for(int j=0;j<k;j++){
                cost[i][j]=dist[j];
            }
        }
        aux=0;
        for(int i=1;i<n;i++){
            temp=cost[inst[i-1]][inst[i]];
            rta+=temp;
        }
        dif=max(cost[inst[0]][inst[1]],cost[inst[n-2]][inst[n-1]]);
        for(int i=1;i<n-1;i++){
            temp=cost[inst[i-1]][inst[i]]+cost[inst[i]][inst[i+1]];
            aux=temp-cost[inst[i-1]][inst[i+1]];
            if(aux>dif) dif=aux;
        }
        cout << rta-dif << endl;
    }
    return 0;
}
