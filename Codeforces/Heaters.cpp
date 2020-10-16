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
const int MAX=1005;
int prefix[MAX];

int main(){
    int n,r,ind,ult,aux,sum,lim;
    ll rta=0;
    vector<pii> range;
    vector<int> lista;
    bool ac=true;
    cin >> n >> r;
    for(int i=0;i<n;i++){
        cin >> aux;
        if(aux==1){
            rta++;
            ind=max(0,i-r+1);
            ult=min(n,i+r);
            range.pb({ind,ult});
        }
        lista.pb(aux);
    }
    sum=r*2-1;
    lim=range.size();
    for(int i=0;i<lim;i++){
        for(int j=range[i].ft;j<range[i].sd;j++){
            lista[j]=1;
            prefix[j]++;
        }
    }
    for(int i=0;i<lim;i++){
        aux=0;
        for(int j=range[i].ft;j<range[i].sd;j++){
            if(prefix[j]>1) aux++;
        }
        if(aux==sum){
            rta--;
            for(int j=range[i].ft;j<range[i].sd;j++){
                prefix[j]--;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(lista[i]==0) {ac=false;break;}
    }
    if(ac) cout << rta << endl;
    else cout << -1 << endl;
    return 0;
}
