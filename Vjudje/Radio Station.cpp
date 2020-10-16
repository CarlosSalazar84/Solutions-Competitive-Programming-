#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
//#define endl '\n'
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
    int n,m,lim,ind;
    string s,ip,aux;
    cin >> n >> m;
    unordered_map<string,string> lista;
    vector<string> nombres,IPs,out;
    for(int i=0;i<n;i++){
        cin >> s >> ip;
        lista[ip]=s;
    }
    for(int i=0;i<m;i++){
        cin >> s >> ip;
        nombres.pb(s);
        IPs.pb(ip);
    }
    for(int i=0;i<m;i++){
        ip=IPs[i];
        ip.pob;
        s=lista[ip];
        aux=nombres[i] + " " + IPs[i] + " #" + s;
        out.pb(aux);
    }
    for(int i=0;i<m;i++){
        cout << out[i] << endl;
    }
    return 0;
}
