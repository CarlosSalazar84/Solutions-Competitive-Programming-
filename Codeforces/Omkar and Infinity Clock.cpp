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
        ll n,k,aux,d=0;
        cin >> n >> k;
        vector<ll> in,odd,even;
        for(int i=0;i<n;i++){
            cin >> aux;
            in.pb(aux);
        }
        d=*max_element(in.begin(),in.end());
        for(int i=0;i<n;i++){
            aux=d-in[i];
            odd.pb(aux);
        }
        d=*max_element(odd.begin(),odd.end());
        for(int i=0;i<n;i++){
            aux=d-odd[i];
            even.pb(aux);
        }
        if(k%2==1){
            for(int i=0;i<n;i++){
                if(i!=n-1) cout << odd[i] << " ";
                else cout << odd[i] << endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(i!=n-1) cout << even[i] << " ";
                else cout << even[i] << endl;
            }
        }
    }
    return 0;
}
