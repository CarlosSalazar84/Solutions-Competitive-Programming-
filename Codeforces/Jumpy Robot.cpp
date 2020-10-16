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

const int MAX=1e6;
const int MAX_d=63;
const int oo=1e8;
int dp[MAX_d][MAX];
int d,m;

int calculate(int i,int k){
    if(k==m) return d-i;
    if(i==-1 || k<0) return oo;
    if(dp[i][k]!=-1) return dp[i][k];
    dp[i][k]=min(calculate(i-1,k+(1<<i)),calculate(i-1,k-(1<<i)));
    return dp[i][k];
}

int main(){
    fastIO;
    int t;
    cin >> t;
    for(int c=1;c<=t;c++){
        memset(dp,-1,sizeof(dp));
        int out;
        ll x;
        bool ok=true;
        cin >> d >> x;
        if((1<<d+1)-1<x) ok=false;
        else{
            m=int(x);
            out=calculate(d,0);
            if(out==oo) ok=false;
        }
        if(ok) cout << "Case " << c << ": YES " << out << endl;
        else cout << "Case " << c << ": NO " << endl;
    }
    return 0;
}
