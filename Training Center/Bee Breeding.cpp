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

const int N=255;
const int MAX=2e5;
vector<int> dy={ 1,-1,-2,-1, 1, 2};
vector<int> dx={-1,-1, 0, 1, 1, 0};
int dist[N][N];
pii numbers[MAX];
int n;

void built(){
    numbers[1]={125,125};
    numbers[2]={127,125};
    ll num=2;
    int cnt=1,lim,x=125,y=127;
    for(int i=1;i<61;i++){
        lim=i*cnt-1;
        for(int j=0;j<6;j++){
            if(j==1 || j==5) lim++;
            for(int k=0;k<lim;k++){
                num++;
                y+=dy[j];
                x+=dx[j];
                numbers[num]={y,x};
            }
        }
    }
}

void bfs(pii u){
    queue<pii> q;
    memset(dist,-1,sizeof(dist));
    q.push(u);
    dist[u.ft][u.sd]=0;

    while(q.size()){
        u=q.front();
        q.pop();
        for(int i=0;i<6;i++){
            int ny=u.ft+dy[i];
            int nx=u.sd+dx[i];
            if(ny<125-2*n || ny>=125+2*n || nx<125-n || nx>=125+n) continue;
            if(dist[ny][nx]==-1){
                dist[ny][nx]=dist[u.ft][u.sd]+1;
                q.push({ny,nx});
            }
        }
    }
}

int main(){
    built();
    int a,b;
    while(cin >> a >> b){
        if(a==0 && b==0) break;
        int y,x,rta;
        int l=1,r=60,m,aux,s;
        s=max(a,b);
        while(l!=r){
            m=(l+r)/2;
            aux=3*m*(m+1)-6*m+1;
            if(aux<s) l=m+1;
            else r=m;
        }
        n=l;
        y=numbers[a].ft;
        x=numbers[a].sd;
        bfs({y,x});
        y=numbers[b].ft;
        x=numbers[b].sd;
        rta=dist[y][x];
        cout << "The distance between cells " << a << " and "<< b << " is " << rta << "." << endl;
    }
    return 0;
}
