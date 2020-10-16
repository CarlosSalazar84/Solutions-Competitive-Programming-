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


const int MAX = 15;
vector<int> g[MAX];
int dist[MAX];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    dist[u]=0;

    while(q.size()){
        u=q.front();
        q.pop();
        for(auto v:g[u]){
            if(dist[v]==-1) {
                dist[v]=dist[u]+1;
                q.push(v);
            }
        }
    }
}

int main(){
    memset(dist,-1,sizeof(dist));
    int n,x,y,lim;
    int xo,xf,yo,yf;
    int distX,distY,tempX,tempY;
    vector<pair<int,pii>> equipoA;
    vector<pii> puntos;
    bool add;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        equipoA.pb({x,{y,i}});
        puntos.pb({x,y});
    }
    for(int i=0;i<n;i++){
        cin >> x >> y;
        puntos.pb({x,y});
    }
    lim=2*n;
    sort(equipoA.begin(),equipoA.end());
    sort(puntos.begin(),puntos.end());
    for(int i=0;i<n;i++){
        xo=equipoA[i].ft;
        yo=equipoA[i].sd.ft;
        for(int j=i+1;j<n;j++){
            add=true;
            xf=equipoA[j].ft;
            yf=equipoA[j].sd.ft;
            distX=xo-xf;
            distY=yo-yf;
            for(int k=0;k<lim;k++){
                x=puntos[k].ft;
                y=puntos[k].sd;
                if((x==xo && y==yo)||(x==xf && y==yf)) continue;
                else if(x>=xo && x<=xf){
                    tempX=xo-x;
                    tempY=yo-y;
                    if(1LL*distY*tempX==1LL*distX*tempY) add=false;
                }
            }
            if(add){
                int ind1,ind2;
                ind1=equipoA[i].sd.sd;
                ind2=equipoA[j].sd.sd;
                g[ind1].pb(ind2);
                g[ind2].pb(ind1);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(auto &x:g[i]) cout << x << " ";
        cout << endl;
    }
    bfs(0);
    cout << dist[n-1] << endl;
}
