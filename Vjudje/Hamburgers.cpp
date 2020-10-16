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
    ll rta = 0, d, aux;
    string s;
    ll cant[3], price[3], exc[3];
    memset(cant,0,sizeof(cant));
    cin >> s;
    for(int i = 0; i < 3; i++) cin >> exc[i];
    for(int i = 0; i < 3; i++) cin >> price[i];
    cin >> d;

    aux = s.size();
    for(int i = 0; i < aux; i++){
        if(s[i] == 'B') cant[0]++;
        else if(s[i] == 'S') cant[1]++;
        else cant[2]++;
    }

    ll l=0,r=1e13+1,m;
    while(r-l>1){
        aux = 0;
        m = (l+r)/2;
        for(int i = 0; i < 3; i++){
            aux += max(cant[i]*m-exc[i],0ll)*price[i];
        }
        if(aux>d) r = m-1;
        else l = m;
    }
    aux = 0;
    for(int i = 0; i < 3; i++){
        aux += max(cant[i]*r-exc[i],0ll)*price[i];
    }
    if(aux>d) rta = l;
    else rta = r;
    cout << rta << endl;
    return 0;
}

