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

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,lim;
        cin >> n;
        ll aux1,aux2;
        vector<ll> in;
        vector<pii> out;
        ll prefix[n];
        for(int i=0;i<n;i++){
            cin >> aux1;
            in.pb(aux1);
        }
        prefix[0]=in[0];
        for(int i=1;i<n;i++){
            prefix[i]=in[i]+prefix[i-1];
        }
        for(int i=0;i<n-1;i++){
            aux1=(1LL*(i+1)*(i+2))/2;
            aux2=(1LL*(n-i-1)*(n-i))/2;
            if(prefix[i]==aux1 && prefix[n-1]-prefix[i]==aux2){
                bool ok=true;
                map<int,int> one,two;
                for(int j=0;j<=i;j++){
                    one[in[j]]++;
                    if(one[in[j]]>1)ok=false;
                }
                for(int j=i+1;j<n;j++){
                    two[in[j]]++;
                    if(two[in[j]]>1)ok=false;
                }
                if(ok) out.pb({i+1,n-i-1});
            }
        }
        lim=out.size();
        cout << lim << endl;
        for(int i=0;i<lim;i++){
            cout << out[i].ft << " " << out[i].sd << endl;
        }
    }
    return 0;
}
