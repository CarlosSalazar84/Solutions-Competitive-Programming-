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
typedef pair<ll,int> plli;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int MAX = 104;
vector<plli> g[MAX];
bool used[MAX];
ll dist[MAX];
int n;

void dijkstra(plli u){
    priority_queue<plli, vector<plli>, greater<plli>> q;
    q.push(u);

    while(q.size()){
        u = q.top();
        q.pop();
        if(!used[u.sd]){
            dist[u.sd] = u.ft;
            used[u.sd] = true;

            for(auto &v:g[u.sd]){
                q.push({u.ft + v.ft, v.sd});
            }
        }
    }
}

int main(){
    ll aux, rta = 0;
    string s;
    cin >> n;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            cin >> s;
            if(s != "x"){
                aux = atoll(s.data());
                g[i].pb({aux, j});
                g[j].pb({aux, i});
            }
        }
    }

    dijkstra({0, 0});
    for(int i = 1; i < n; i++){
        if(dist[i] > rta) rta = dist[i];
    }
    cout << rta << endl;
    return 0;
}

