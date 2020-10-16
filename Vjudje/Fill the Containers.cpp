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
    int n, c;
    while(cin >> n >> c){
        int cont[n];
        for(int i = 0; i < n; i++){
            cin >> cont[i];
        }
        ll l = 1, r = 0, m, rta, aux, acc;
        r = accumulate(cont,cont+n,r);
        while(r-l>1){
            m = (l+r)/2;
            aux = 1, acc = m;
            for(int i = 0; i < n; i++){
                if(cont[i] > m){
                    aux = c+1;
                    break;
                }
                if(cont[i] > acc){
                    acc = m - cont[i];
                    aux++;
                }
                else acc -= cont[i];
            }
            if(aux > c) l = m+1;
            else r = m;
        }
        aux = 1, acc = l;
        for(int i = 0; i < n; i++){
            if(cont[i] > l){
                aux = c+1;
                break;
            }
            if(cont[i] > acc){
                acc = l - cont[i];
                aux++;
            }
            else acc -= cont[i];
        }
        if(aux > c) rta = r;
        else rta = l;
        cout << rta << endl;
    }
    return 0;
}

