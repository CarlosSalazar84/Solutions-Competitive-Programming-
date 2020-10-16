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
typedef pair<pii,int> piii;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int MAX = 1e5+4;
vector<int> g[MAX];
int n, m;

void init(){
    for(int i = 0; i < n; i++){
        g[i].clear();
    }
}

int main(){
    int c;
    cin >> c;
    while(c--){
        int q, t, x, y, lim;
        cin >> n >> m;
        bool ok = true;
        vector<pii> u, out;
        for(int i = 0; i < m; i++){
            cin >> t >> x >> y;
            if(t){
                g[x].pb(y);
            }
            else{
                u.pb({x,y});
            }
        }

        lim = u.size();
        for(int i = 0; i < lim; i++){
            x = u[i].ft, y = u[i].sd;
            if(g[x].empty()){
                g[y].pb(x);
                out.pb({y,x});
            }
            else if (g[y].empty()){
                g[x].pb(y);
                out.pb({x,y});
            }
            else ok = false;
        }

        if(ok){
            cout << "YES" << endl;
            for(auto &x:out){
                cout << x.ft << " " << x.sd << endl;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}
