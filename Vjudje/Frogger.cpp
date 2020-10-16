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
typedef pair<double,int> pdi;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int MAX = 103;
vector<pdi> g[MAX];
bool used[MAX];
double dist[MAX];
int n;

void dijkstra(pdi u){
    priority_queue<pdi, vector<pdi>, greater<pdi>> q;
    q.push(u);

    while(q.size()){
        u = q.top();
        q.pop();
        if(!used[u.sd]){
            dist[u.sd] = u.ft;
            used[u.sd] = true;

            for(auto &v:g[u.sd]){
                q.push({max(u.ft, v.ft), v.sd});
            }
        }
    }
}

void init(){
    memset(used, 0, sizeof(used));
    memset(dist, -1, sizeof(dist));
    for(int i = 0; i < MAX; i++){
        g[i].clear();
    }
}

int main(){
    cout << fixed << setprecision(3);
    int s = 1;
    while(cin >> n){
        if(!n) break;
        int a, b;
        double x, y, aux;
        vector<pii> st;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            st.pb({a, b});
        }

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                x = (st[i].ft - st[j].ft);
                y = (st[i].sd - st[j].sd);
                aux = sqrt(x*x + y*y);

                g[i].pb({aux, j});
                g[j].pb({aux, i});
            }
        }
        dijkstra({0.0, 0});
        cout << "Scenario #" << s << endl;
        cout << "Frog Distance = " << dist[1] << endl;
        cout << endl;
        s++;
        init();
    }
    return 0;
}

