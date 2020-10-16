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
int marked[MAX+1];
int prefix[MAX];
int prime[MAX+1];

void sieve(){
    prime[1]=1;
    for(int i=2;i<=MAX;i++) if(!prime[i]){
        prime[i]=i;
        for(ll j=1ll*i*i;j<=MAX;j+=i){
            if(!prime[j]) prime[j]=i;
        }
    }
}

void calculate(){
    prefix[1]++;
    for(int i=2;i<=MAX;i++){
        if(prime[i/prime[i]]==i/prime[i]) prefix[i]++;
        prefix[i]+=prefix[i-1];
    }
}

int main(){
    fastIO;
    int t;
    cin >> t;
    sieve();
    calculate();
    for(int c=1;c<=t;c++){
        int p,q,n,aux;
        cin >> n;
        q=n;
        p=prefix[n];
        aux=__gcd(p,q);
        while(aux!=1){
            q/=aux;
            p/=aux;
            aux=__gcd(p,q);
        }
        cout << "Case " << c << ": " << p << "/" << q << endl;
    }
    return 0;
}
