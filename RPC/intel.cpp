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
typedef pair<bool,bool> pbb;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

map<int,vector<int>> ejeX, ejeY;
map<pii,int> paredesX, paredesY;

int main(){
    fastIO;
    int n, x, y, lim, ini, fi, sum, aux;
    ll rta = 0;
    bool vis = false;
    cin >> n;
    set<int> X, Y;
    vector<pii> recX, recY;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        ejeX[x].pb(y);
        ejeY[y].pb(x);
        X.insert(x);
        Y.insert(y);
    }

    for(auto &z:X){
        sort(ejeX[z].begin(), ejeX[z].end());
    }
    for(auto &z:Y){
        sort(ejeY[z].begin(), ejeY[z].end());
    }

    for(auto &z:X){
        lim = ejeX[z].size();
        for(int i = 0; i < lim; i+=2){
            ini = ejeX[z][i];
            fi = ejeX[z][i+1];
            recX.pb({ini,1});
            recX.pb({fi,-1});
        }
    }
    for(auto &z:Y){
        lim = ejeY[z].size();
        for(int i = 0; i < lim; i+=2){
            ini = ejeY[z][i];
            fi = ejeY[z][i+1];
            recY.pb({ini,1});
            recY.pb({fi,-1});
        }
    }
    sort(recX.begin(), recX.end());
    sort(recY.begin(), recY.end());

    lim = recX.size();
    sum = 0;
    for(int i = 0; i < lim - 1; i++){
        sum += recX[i].sd;
        aux = recX[i+1].ft - recX[i].ft;
        rta += max(0, aux*(sum-2));
    }
    lim = recY.size();
    sum = 0;
    for(int i = 0; i < lim - 1; i++){
        sum += recY[i].sd;
        aux = recY[i+1].ft - recY[i].ft;
        rta += max(0, aux*(sum-2));
    }
    cout << rta << endl;
    return 0;
}
