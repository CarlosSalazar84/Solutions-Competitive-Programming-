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
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    fastIO;
    int n, m, a, b;
    string s;
    cin >> n >> m;
    priority_queue<pair<int,string>> lista[m];
    for(int i = 0; i < n; i++){
        cin >> s >> a >> b;
        lista[a-1].push({b,s});
    }
    for(int i = 0; i < m; i++){
        s = "";
        pair<int,string> aux = lista[i].top();
        lista[i].pop();
        s = s + aux.sd + " ";

        aux = lista[i].top();
        lista[i].pop();
        a = aux.ft;
        s += aux.sd;

        if(lista[i].empty() || a != lista[i].top().ft){
            cout << s << endl;
        }
        else cout << "?" << endl;
    }
    return 0;
}

