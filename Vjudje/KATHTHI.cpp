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

const int MAX = 1004;
const int ALL = 1000009;
char plane[MAX][MAX];
int dist[MAX][MAX];
bool vis[MAX][MAX];
vector<pii> q[ALL];
int dx[] = { 0, 1, 0,-1};
int dy[] = {-1, 0, 1, 0};
int m, n;

void bfs(pii u){
    int cnt = 0;
    q[cnt].pb(u);

    while(cnt != 1000009){
        if(q[cnt].empty()) cnt++;
        else{
            u = q[cnt].back();
            q[cnt].pob;
            if(!vis[u.ft][u.sd]){
                vis[u.ft][u.sd] = true;
                dist[u.ft][u.sd] = cnt;

                for(int i = 0; i < 4; i++){
                    int ny = u.ft + dy[i], nx = u.sd + dx[i];
                    if(ny > -1 && ny < m && nx > -1 && nx < n){
                        if(plane[u.ft][u.sd] == plane[ny][nx]){
                            q[cnt].pb({ny,nx});
                        }
                        else q[cnt+1].pb({ny,nx});
                    }
                }
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> plane[i][j];
            }
        }
        bfs({0,0});
        cout << dist[m-1][n-1] << endl;
        memset(vis, 0, sizeof(vis));
    }
    return 0;
}

