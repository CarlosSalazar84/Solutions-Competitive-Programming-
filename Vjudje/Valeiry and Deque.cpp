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
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    ll n,q,temp,lim=0,pos=0,a,b;
    cin >> n >> q;
    deque<ll> datos;
    vector<ll> consultas;
    vector<pll> c1;
    vector<pll> c2;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp>lim){
            lim=temp;
            pos=i;
        }
        datos.pb(temp);
    }
    for(int i=0;i<q;i++){
        cin >> temp;
        consultas.pb(temp);
    }
    for(int i=0;i<pos;i++){
        a=datos.front();
        datos.pof;
        b=datos.front();
        datos.pof;
        if(a>=b){
            datos.pf(a);
            datos.pb(b);
        }
        else{
            datos.pf(b);
            datos.pb(a);
        }
        c1.pb({a,b});
    }
    /*for(auto &x:c1){
        cout << x.ft << " " << x.sd << endl;
    }*/
    for(int i=0;i<n-1;i++){
        a=datos.front();
        datos.pof;
        b=datos.front();
        datos.pof;
        if(a>=b){
            datos.pf(a);
            datos.pb(b);
        }
        else{
            datos.pf(b);
            datos.pb(a);
        }
        c2.pb({a,b});
    }
    for(auto &x:c1){
        cout << x.ft << " " << x.sd << endl;
    }
    cout << "----" << endl;
    for(auto &x:c2){
        cout << x.ft << " " << x.sd << endl;
    }
    for(auto &x:consultas){
        if(x<=c1.size()) cout << c1[x-1].ft << " " << c1[x-1].sd << endl;
        else{
            x-=c1.size()+1;
            x=x%(n-1);
            cout << c2[x].ft << " " << c2[x].sd << endl;
        }
    }
    return 0;
}

