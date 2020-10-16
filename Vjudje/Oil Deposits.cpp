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

const int MAX = 104;
char plane[MAX][MAX];
bool vis[MAX][MAX];
int dx[] = {-1, 0, 1, 1, 1, 0,-1,-1};
int dy[] = {-1,-1,-1, 0, 1, 1, 1, 0};
int m, n;

void bfs(pii u){
    queue<pii> q;
    q.push(u);

    while(q.size()){
        u = q.front();
        q.pop();
        vis[u.ft][u.sd] = true;
        for(int i = 0; i < 8; i++){
            int ny = u.ft + dy[i], nx = u.sd + dx[i];
            bool ok = ny > -1 && ny < m && nx > -1 && nx < n;
            if(ok && !vis[ny][nx] && plane[ny][nx] != '*'){
                q.push({ny, nx});
            }
        }
    }
}

int main(){
    while(cin >> m >> n){
        if(!m && !n) break;
        memset(vis, 0, sizeof(vis));
        int rta = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> plane[i][j];
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(plane[i][j] != '*' && !vis[i][j]){
                    rta++;
                    bfs({i,j});
                }
            }
        }
        cout << rta << endl;
    }
    return 0;
}

