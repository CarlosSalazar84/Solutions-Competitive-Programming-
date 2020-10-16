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

const double PI=acos(-1);

int main(){
    cout << fixed << setprecision(4);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        ll x;
        cin >> x;
        long double AD,AEDF,AFE,AF,AFG,out;
        AD=sqrt(1.0*((x*x)+(x*x)));
        AEDF=(AD*AD*PI)/16;
        AFE=(1.0*x*x)/4;
        AF=AEDF-AFE;
        AFG=(x*x*PI)/8;
        out=AFG-AF;
        cout << "Case " << i << ": " << out << endl;
    }
    return 0;
}
