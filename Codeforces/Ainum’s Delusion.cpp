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

int main(){
    fastIO;
    int t;
    cin >> t;
    for(int c=1;c<=t;c++){
        int lim;
        ll rta=0,aux,n;
        string s;
        cin >> n >> s;
        ll numbers[n];
        if(n%2==0) aux=((n/2)-1)*2;
        else aux=2*(n/2)-1;
        numbers[0]=numbers[n-1]=n*(n+1)/2;
        lim=ceil(1.0*n/2);
        for(int i=1;i<lim;i++){
            numbers[i]=numbers[i-1]-aux;
            numbers[n-i-1]=numbers[i];
            aux-=2;
        }
        for(auto &x:numbers) cout << x << " ";
        cout << endl;
        for(int i=0;i<n;i++){
            rta=(rta+(1LL*s[i]*numbers[i])%mod)%mod;
        }
        cout << "Case " << c << ": " << rta << endl;
    }
    return 0;
}
