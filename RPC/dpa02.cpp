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

const int MAX=1000000;
bool marked[MAX+1];
vector<int> primes;

void sieve(){
    marked[0]=marked[1]=true;
    for(int i=2;i<=MAX;i++) if(!marked[i]){
        primes.push_back(i);
        for(ll j=1ll*i*i;j<=MAX;j+=i) marked[j]=true;
    }
}

void fact(ll n,map<ll,int>&f){
    int lim=primes.size();
    for(int i=0;i<lim;i++){
        while(n%primes[i]==0) f[primes[i]]++,n/=primes[i];
        if(n==1) break;
    }
    if(n>1) f[n]++;
}

ll exp(ll b,int e){
    ll ans=1;
    while(e){
        if(e&1) ans=ans*b;
        b=b*b;
        e/=2;
    }
    return ans;
}

ll sumDiv(ll n){
    map<ll,int> f;
    fact(n,f);
    ll ans=1;
    for(auto p:f) {
        cout << "PRUEBA " << exp(p.first, p.second+1) << endl;
        ans*=(exp(p.first, p.second+1)-1)/(p.first-1);
    }
    return ans;
}

int main(){
    fastIO;
    sieve();
    int t;
    cin >> t;
    while(t--){
        ll n;
        ll rta=0;
        cin >> n;
        rta=sumDiv(n);
        rta-=n;
        if(rta<n) cout << "deficient" << endl;
        else if(rta>n) cout << "abundant" << endl;
        else cout << "perfect" << endl;
    }
    return 0;
}
