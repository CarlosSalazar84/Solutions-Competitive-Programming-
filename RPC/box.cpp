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

int base[104];

int main(){
    fastIO;
    int n, r, h, v, c, lim, aux, rta = 0;
    cin >> n >> r;
    for(int i = 0; i < r; i++){
        cin >> h >> v  >> c;
        lim = min(n + 1 ,c + h);
        aux = 0;
        for(int j = c; j < lim; j++){
            if(base[j] > aux) aux = base[j];
        }
        for(int j = c; j < lim; j++){
            base[j] = aux + v;
        }
    }
    for(int i = 1; i <= n; i++){
        rta = max(rta, base[i]);
    }
    cout << rta << endl;
    return 0;
}
