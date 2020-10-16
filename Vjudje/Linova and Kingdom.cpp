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
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

const int MAX = 100005;
vector<int> g[MAX];
long long dist[MAX];
int ctr[MAX];
int N,M,top;

void bfs(int u){
    queue<int> q;
    q.push(u);
    dist[u]=0;
    ctr[0]=1;
    while(q.size()){
        u=q.front();
        q.pop();
        for(auto v:g[u]){
            if(dist[v]==-1){
                dist[v]=dist[u]+1;
                ctr[dist[v]]++;
                q.push(v);
            }
        }
    }
}

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int a,b,k,rta=0;
    memset(dist,-1,sizeof(dist));
    cin >> N >> k;
    for(int i=1;i<N;i++){
        cin >> a >> b;
        g[a].pb(b);
    }
    bfs(1);
    for(int i=N;i>=0;i++){
        if(k>0 && ctr[i]>=k) {k-=ctr[i];ctr[i]=0;}
        else if(k>0 && ctr[i]<k) {ctr[i]-=k;k=0;}
        if(k==0){rta=i;break;}
    }
    return 0;
}
