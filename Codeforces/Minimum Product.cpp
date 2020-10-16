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
    fastIO;
    int t;
    cin >> t;
    while(t--){
        ll a, b, x, y, n, aux, rta = 0;
        ll difA, difB, opA, opB;
        cin >> a >> b >> x >> y >> n;
        difA = a - x;
        difB = b - y;

        opA = a - min(difA,n);
        if(n > difA) opA *= b-min(difB,(n-difA));
        else opA *= b;

        opB = (b - min(difB,n));
        if(n > difB) opB *= a-min(difA,(n-difB));
        else opB *= a;

        rta = min(opA,opB);
        cout << rta << endl;
    }
    return 0;
}
