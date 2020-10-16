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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int mod=1e9+7;
ll inverseTwo,inverseSix;

ll mulmod(ll a,ll b){
	ll r=a*b-(ll)((long double)a*b/mod+.5)*mod;
	return r<0 ? r+mod : r;
}

ll expmod(ll b,ll e){
    ll ans=1;
    while(e){
        if(e&1) ans=mulmod(ans,b);
        b=mulmod(b,b);
        e/=2;
    }
    return ans;
}

ll calc_sum(ll n){
    return mulmod(n,mulmod((n+1)%mod,inverseTwo));
}

ll calc_excsum(ll n,ll exc){
    ll aux;
    aux=mulmod(mulmod(n,mulmod((n+1)%mod,(2*n+1)%mod)),inverseSix);
    aux=mulmod(aux,exc);
    aux=(aux-mulmod(exc,calc_sum(n)));
    return aux;
}

ll calc_exc(ll n){
    ll out,aux;
    aux=1+n/2;
    out=(calc_sum(n-aux)+calc_sum(n/2))%mod;
    out=(out+mulmod(calc_sum(aux),calc_sum(n-aux)))%mod;
    out=(out+calc_excsum(n-aux,aux));
    return aux;
}

int main(){
    fastIO;
    inverseTwo=expmod(2,mod-2);
    inverseSix=expmod(6,mod-2);
    int t;
    cin >> t;
    while(t--){
        ll n,out;
        cin >> n;
        out=(calc_sum(n)-calc_exc(n)+mod)%mod;
        cout << out << endl;
    }
    return 0;
}
