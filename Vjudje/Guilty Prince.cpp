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

const int MAX = 24;
char plane[MAX][MAX];
bool vis[MAX][MAX];
int dx[] = { 0, 1, 0,-1};
int dy[] = {-1, 0, 1, 0};
int m, n, rta;

void bfs(pii u){
    queue<pii> q;
    q.push(u);
    vis[u.ft][u.sd] = true;

    while(q.size()){
        u = q.front();
        q.pop();
        rta++;

        for(int i = 0; i < 4; i++){
            int ny = u.ft + dy[i], nx = u.sd + dx[i];
            bool ok = ny > -1 && ny < m && nx > -1 && nx < n;
            if(ok && !vis[ny][nx] && plane[ny][nx] != '#'){
                q.push({ny, nx});
                vis[ny][nx] = true;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    for(int c = 1; c <= t; c++){
        memset(vis, 0, sizeof(vis));
        rta = 0;
        pii u;
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> plane[i][j];
                if(plane[i][j] == '@') u = {i, j};
            }
        }
        bfs(u);
        cout << "Case " << c << ": " << rta << endl;
    }
    return 0;
}

