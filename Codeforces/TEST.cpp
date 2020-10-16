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
const int MAX = 2005;
char plane[MAX][MAX];
char road[MAX][MAX];
int dist[MAX][MAX];
int n,m;           //abajo, izq,  der,  arriba
vector<pii> movs = {{1,0},{0,-1},{0, 1},{-1,0}};
vector<char> ruta = {'D', 'L', 'R', 'U'};

bool validate(int i,int j){
    bool out;
    out = i>-1 && i<n && j>-1 && j<m;
    return out;
}

void bfs(pair<pii,char> u){
    queue<pair<pii,char>> q;
    q.push(u);
    dist[u.ft.ft][u.ft.sd] = 0;

    while(q.size()){
        u = q.front();
        q.pop();
        road[u.ft.ft][u.ft.sd]=u.sd;

        for(int r=0;r<4;r++){
            int i=u.ft.ft+movs[r].ft,j=u.ft.sd+movs[r].sd;
            while(validate(i,j)){
                if(plane[i][j]!='X'){
                    if(dist[i][j]!=-1) break;
                    dist[i][j] = dist[u.ft.ft][u.ft.sd] + 1;
                    q.push({{i,j},ruta[r]});
                    break;
                }
                i+=movs[i].ft,j+=movs[i].sd;
            }
        }
    }
}

int main(){
    fastIO;
    memset(dist,-1,sizeof(dist));
    pii in,out;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j= 0; j<m; j++){
            cin >> plane[i][j];
            if(plane[i][j]=='S') in={i,j};
            else if(plane[i][j]=='E') out={i,j};
        }
    }
    bfs({in,'I'});
    cout << dist[out.ft][out.sd] << endl;
}
