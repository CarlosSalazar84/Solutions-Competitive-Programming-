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

double x,y,r;

bool in(double tx,double ty){
    bool ok;
    ok=(x-tx)*(x-tx)+(y-ty)*(y-ty)<r*r;
    return ok;
}

bool touch(double tx,double ty){
    bool ok;
    ok=(x-tx)*(x-tx)+(y-ty)*(y-ty)==r*r;
    return ok;
}

int main(){
    double tx,ty,w;
    bool dentro=false,borde=false;
    vector<pii> puntos;
    cin >> x >> y >> r;
    cin >> tx >> ty >> w;
    pii base={tx,ty};
    for(double j=0;j<=w*10000;j++){
        double exc=0.0001*j;
        dentro=dentro || in(base.ft+exc,base.sd);
        borde=borde || touch(base.ft+exc,base.sd);
    }
    for(double j=0;j<=w*10000;j++){
        double exc=0.0001*j;
        dentro=dentro || in(base.ft,base.sd+exc);
        borde=borde || touch(base.ft,base.sd+exc);
    }
    for(double j=0;j<=w*10000;j++){
        double exc=0.0001*j;
        dentro=dentro || in(base.ft+w,base.sd+exc);
        borde=borde || touch(base.ft+w,base.sd+exc);
    }
    for(double j=0;j<=w*10000;j++){
        double exc=0.0001*j;
        dentro=dentro || in(base.ft+exc,base.sd+w);
        borde=borde || touch(base.ft+exc,base.sd+w);
    }
    if(dentro) cout << 2 << endl;
    else if(borde) cout << 1 << endl;
    else cout << 0 << endl;

}
