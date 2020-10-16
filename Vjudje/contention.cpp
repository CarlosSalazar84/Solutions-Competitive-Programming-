#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,int> pll;

const int MAX = 100005;
vector<int> uniones[MAX];
int cambios[MAX];
int n,m;

void bfs(int u) {
    queue<int> q;
    q.push(u);
    while(q.size()){
        u=q.front();
        q.pop();
        for(auto v:uniones[u]){
            if(cambios[v]==-1){
                cambios[v]=cambios[u]+1;
                q.push(v);
            }
        }
    }
}

int main(){
    #ifndef LOCAL
        fastIO;
    #endif
    int a,b;
    memset(cambios,-1,sizeof(cambios));
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        uniones[a].push_back(b);
        uniones[b].push_back(a);
    }
    bfs(1);
    cout << cambios[n] << endl;
    return 0;
}
