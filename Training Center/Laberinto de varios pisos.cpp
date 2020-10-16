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

struct node{
    int y,x,z;
};

const int MAX=205;
vector<int> dy={ 1, 0,-1, 0};
vector<int> dx={ 0, 1, 0,-1};
vector<int> dz={ 1,-1};
int dist[MAX][MAX][MAX];
char plane[MAX][MAX][MAX];
int x,y,z;

void bfs(node u){
    queue<node> q;
    memset(dist,-1,sizeof(dist));
    q.push(u);
    dist[u.y][u.x][u.z]=0;

    while(q.size()){
        u=q.front();
        q.pop();
        if(plane[u.y][u.x][u.z]=='-'){
            for(int i=0;i<2;i++){
                int nz=u.z+dz[i];
                if(nz<0 || nz>=z) continue;
                if(plane[u.y][u.x][nz]!='-') continue;
                if(dist[u.y][u.x][nz]==-1){
                    dist[u.y][u.x][nz]=dist[u.y][u.x][u.z]+1;
                    q.push({u.y,u.x,nz});
                }
            }
        }
        for(int i=0;i<4;i++){
            int ny=u.y+dy[i];
            int nx=u.x+dx[i];
            if(ny<0 || ny>=y || nx<0 || nx>=x) continue;
            if(plane[ny][nx][u.z]=='#') continue;
            if(dist[ny][nx][u.z]==-1){
                dist[ny][nx][u.z]=dist[u.y][u.x][u.z]+1;
                q.push({ny,nx,u.z});
            }
        }
    }
}

int main(){
    while(cin >> y >> x >> z){
        if(y==0 && x==y && z==y) break;
        int rta;
        node ini,ult;
        for(int i=0;i<z;i++){
            for(int j=0;j<y;j++){
                for(int k=0;k<x;k++){
                    cin >> plane[j][k][i];
                    if(plane[j][k][i]=='S') ini={j,k,i};
                    if(plane[j][k][i]=='E') ult={j,k,i};
                }
            }
        }
        bfs(ini);
        rta=dist[ult.y][ult.x][ult.z];
        cout << rta << endl;
    }
    return 0;
}
