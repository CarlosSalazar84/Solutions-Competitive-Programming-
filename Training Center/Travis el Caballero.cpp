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

const int MAX=505;
vector<int> dy={-1,-1, 1, 1,-2,-2, 2, 2};
vector<int> dx={-2, 2,-2, 2,-1, 1,-1, 1};
int dist[MAX][MAX];
int n;

void bfs(pii u){
    queue<pii> q;
    memset(dist,-1,sizeof(dist));
    q.push(u);
    dist[u.ft][u.sd]=0;

    while(q.size()){
        u=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int ny=u.ft+dy[i];
            int nx=u.sd+dx[i];
            if(ny<0 || ny>=n || nx<0 || nx>=n) continue;
            if(dist[ny][nx]==-1){
                dist[ny][nx]=dist[u.ft][u.sd]+1;
                q.push({ny,nx});
            }
        }
    }
}

int main(){
    while(cin >> n){
        int a,b,c,d,rta;
        cin >> a >> b >> c >> d;
        bfs({a,b});
        rta=dist[c][d];
        cout << rta << endl;
    }
    return 0;
}
