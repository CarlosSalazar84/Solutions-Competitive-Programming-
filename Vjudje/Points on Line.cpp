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
    int n, d, ind;
    ll rta = 0, aux;
    cin >> n >> d;
    int in[n];
    for(int i = 0; i < n; i++){
        cin >> in[i];
    }
    for(int i = 0; i < n; i++){
        ind = upper_bound(in,in+n,in[i]+d)-in;
        aux = max(ind-i-2,0);
        rta += aux*(aux+1)/2;
    }
    cout << rta << endl;
    return 0;
}

