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

vector<int> divisors(int n){
    vector<int> out;
    int raiz=sqrt(n);
    for(int i=1;i<=raiz;i++){
        if(n%i==0){
            out.pb(i);
            if(n/i!=i) out.pb(n/i);
        }
    }
    return out;
}

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        ll rta=0;
        cin >> n;
        vector<int> in;
        in=divisors(n);
        for(auto &x:in) rta+=x;
        rta-=n;
        if(rta<n) cout << "deficient" << endl;
        else if(rta>n) cout << "abundant" << endl;
        else cout << "perfect" << endl;
    }
    return 0;
}
