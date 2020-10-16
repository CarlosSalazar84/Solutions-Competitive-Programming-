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

const int MAX = 6;
vector<int> uniones[MAX];
int marcas[MAX];
deque<int> topoSort;
int N, M;
bool ciclos=false;

void dfs(int u){
    marcas[u]++;
    for(auto v:uniones[u]){
        if(marcas[v]==0) dfs(v);
        if(marcas[v]==1) ciclos=true;
    }
    topoSort.push_front(u);
    marcas[u]++;
}

int main(){
    #ifndef LOCAL
        fastIO;
    #endif
    char a,b,c;
    memset(marcas,0,sizeof(marcas));
    for(int i=0;i<5;i++){
        cin >> a >> b >> c;
        if(b=='>'){
            uniones[c-'A'].push_back(a-'A');
        }
        else{
            uniones[a-'A'].push_back(c-'A');
        }
    }
    for(int i=0;i<5;i++){
        if(marcas[i]<1) dfs(i);
    }
    if(!ciclos){
        while(topoSort.size()){
            int impresion=topoSort.front();
            topoSort.pop_front();
            cout << char(impresion+'A');
        }
        cout << endl;
    }
    else cout << "impossible" << endl;
    return 0;
}
