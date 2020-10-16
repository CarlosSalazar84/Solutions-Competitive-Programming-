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

struct trap{
    int l;
    int r;
    int d;

    bool operator < (const trap &t){
        if(l == t.l){
            if(r == t.r) return d < t.d;
            else return r < t.r;
        }
        else return l < t.l;
    }
};

vector<trap> field;
int m, n, k, t;

int cost(int a){
    int aux = -1, ini = -1, out;
    for(int i = 0; i < k; i++){
        if(field[i].d > a){
            if(ini == -1) ini = field[i].l - 1;
            if(field[i].r > aux){
                aux = field[i].r;
            }
        }
    }
    out = 2*(aux-ini) + n + 1;
    return out;
}

int main(){
    fastIO;
    int a, b, c, aux, rta = 0;
    cin >> m >> n >> k >> t;
    vector<int> soldiers(m);

    for(int i = 0; i < m; i++){
        cin >> soldiers[i];
    }
    for(int i = 0; i < k; i++){
        cin >> a >> b >> c;
        field.pb({a,b,c});
    }
    sort(soldiers.rbegin(),soldiers.rend());
    sort(field.begin(),field.end());

    aux = cost(soldiers[0]);
    if(aux <= t){
        int l = 0, r = m-1, mid;
        while(r-l>1){
            mid = (l+r)/2;
            aux = cost(soldiers[mid]);
            if(aux > t) r = mid-1;
            else l = mid;
        }

        aux = cost(soldiers[r]);
        if(aux > t) rta = l+1;
        else rta = r+1;
    }
    cout << rta << endl;
    return 0;
}
