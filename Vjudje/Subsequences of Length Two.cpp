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
typedef pair<pii,int> piii;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

int main(){
    int lim, aux;
    string s = "0", p;
    cin >> p;
    s += p;
    lim = s.size();
    p = "";
    p += s[lim-2];
    p += s[lim-1];
    aux = atoi(p.data());
    if(aux%4) cout << 0 << endl;
    else cout << 4 << endl;
    return 0;
}
