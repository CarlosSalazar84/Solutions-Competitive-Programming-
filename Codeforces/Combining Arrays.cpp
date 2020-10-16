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
    int n,aux;
    cin >> n;
    vector<int> rta;
    deque<int> a,b;
    for(int i=0;i<n;i++){
        cin >> aux;
        a.pb(aux);
    }
    for(int i=0;i<n;i++){
        cin >> aux;
        b.pb(aux);
    }
    while(a.size() && b.size()){
        if(a.front()<=b.front()){
            aux=a.front();
            a.pof;
        }
        else{
            aux=b.front();
            b.pof;
        }
        rta.pb(aux);
    }
    while(a.size()){
        aux=a.front();
        a.pof;
        rta.pb(aux);
    }
    while(b.size()){
        aux=b.front();
        b.pof;
        rta.pb(aux);
    }
    for(int i=0;i<2*n;i++){
        if(i!=2*n-1) cout << rta[i] << " ";
        else cout << rta[i] << endl;
    }
    return 0;
}
