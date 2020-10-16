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
        int n,aM=1e9+5,bM=1e9+5;
        ll rta=0;
        bool ac=true;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<aM) aM=a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(b[i]<bM) bM=b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>aM && b[i]>bM){
                if(a[i]-aM>=b[i]-bM){
                    rta+=b[i]-bM;
                    rta+=a[i]-aM-b[i]+bM;
                }
                else{
                    rta+=a[i]-aM;
                    rta+=b[i]-bM-a[i]+aM;
                }
            }
            else{
                rta+=a[i]-aM;
                rta+=b[i]-bM;
            }
        }
        cout << rta << endl;
    }
    return 0;
}
