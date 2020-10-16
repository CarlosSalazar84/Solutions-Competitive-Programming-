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

const int MAX = 1e4+4;
vector<int> g[MAX];
int color[MAX];
int n;

void bfs(pii u){
    queue<pii> q;
    q.push(u);

    while(q.size()){
        u = q.front();
        q.pop();
        color[u.ft] = u.sd;

        for(auto &v : g[u.ft]){
            if(color[v] == -1){
                q.push({v, 1 - u.sd});
            }
        }

    }
}

void init(){
    for(int i = 0; i < n; i++){
        g[i].clear();
    }
}

int main(){
    while(cin >> n){
        if(!n) break;
        memset(color, -1, sizeof(color));
        int tam, aux, x, a = 0, b = 0, rta;
        pii u = {-1,-1};
        string s;
        getline(cin, s);
        for(int i = 0; i < n; i++){
            getline(cin, s);
            tam = s.size();
            aux = 3;
            while(aux < tam){
                if(u.ft == -1) u = {i, 0};
                x = s[aux] - '0';
                g[i].pb(x);
                g[x].pb(i);
                aux += 2;
            }
        }
        if(u.ft != -1) bfs(u);

        for(int i = 0; i < n; i++){
            if(color[i] == 0) a++;
            else if(color[i] == 1) b++;
        }
        rta = min(a,b)*2 + max(a,b);
        cout << rta << endl;
        init();
    }
    return 0;
}
