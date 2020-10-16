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

vector<ll> divs;

void calculate(ll n){
    for(ll i = 1; i <= n; i*=2){
        for(ll j = 1; i*j <= n; j*=5){
            if(n%(i*j) == 0){
                divs.pb(i*j);
            }
        }
    }
}

int main(){
    fastIO;
    ll n;
    int lim;
    cin >> n;
    calculate(n);
    sort(divs.begin(), divs.end());
    lim = divs.size();
    cout << lim << endl;
    for(int i = 0; i < lim; i++){
        cout << divs[i] << endl;
    }
    return 0;
}
