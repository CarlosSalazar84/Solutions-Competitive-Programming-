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
    int t;
    cin >> t;
    while(t--){
        int n, c ;
        cin >> n >> c;
        ll cows[n], rta;
        for(int i = 0; i < n; i++){
            cin >> cows[i];
        }
        sort(cows,cows+n);
        ll l = 1, r = 1e10, m, aux, cnt, ind;
        while(r-l>1){
            aux = cows[0], cnt = 0;
            m = (l+r)/2;
            while(cnt<c-1){
                aux += m;
                ind = lower_bound(cows,cows+n,aux)-cows;
                if(ind != n) cnt++;
                else break;
                aux = cows[ind];
            }
            if(cnt == c-1) l = m;
            else r = m-1;
        }
        aux = cows[0], cnt = 0;
        while(cnt<c-1){
            aux += r;
            ind = lower_bound(cows,cows+n,aux)-cows;
            if(ind != n) cnt++;
            else break;
            aux = cows[ind];
        }
        if(cnt == c-1) rta = r;
        else rta = l;
        cout << rta << endl;
    }
    return 0;
}

