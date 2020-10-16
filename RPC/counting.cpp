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

const int MAX=5003;
const int mod=1e9+7;
bool marked[MAX];
ll divisors[MAX+1];
ll fact[MAX];
ll inverse_fact[MAX];

void sieve(){
    fill(divisors, divisors+MAX,1);
    marked[0]=marked[1]=true;
    for (int i=2;i<MAX;i++) if(!marked[i]){
        divisors[i]++;
        for(int j=i*2;j<MAX;j+=i){
            int n=j,c=1;
            while(n%i==0) n/=i,c++;
            divisors[j]*=c;
            marked[j]=true;
        }
    }
}

ll mulmod(ll a,ll b){
	ll r=a*b-(ll)((long double)a*b/mod+.5)*mod;
	return r<0 ? r+mod:r;
}

int exp(int b,int e){
    int ans=1;
    while(e){
        if(e&1) ans=mulmod(ans,b);
        b=mulmod(b,b);
        e/=2;
    }
    return ans;
}

void calculate_facts(){
    sieve();
    fact[0]=1;
    inverse_fact[1]=1;
    for(int i=1;i<MAX;i++){
        fact[i]=mulmod(fact[i-1],i);
        inverse_fact[i]=exp(fact[i],mod-2);
    }
}

ll combinatoria(ll a,ll b){
    return mulmod(fact[a],mulmod(inverse_fact[b],inverse_fact[a-b]));
}

int main(){
    fastIO;
    calculate_facts();
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        ll ans=1,cnt=0;
        cin >> n >> k;
        for(int i=1;i<=n;i++){
            cnt+=min(divisors[i]-1,k);
            if(divisors[i]-1>k){
                ans=mulmod(ans,combinatoria(divisors[i]-1,k));
            }
        }
        cout << cnt << " " << ans << endl;
    }
    return 0;
}
