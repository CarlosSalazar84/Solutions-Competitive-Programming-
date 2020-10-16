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
    int n, m, i, j, q, lim, aux;
    string s;
    cin >> n >> m;
    bool go = true;
    vector<string> listaN(n), listaM(m), listaF;
    for(int i = 0; i < n; i++){
        cin >> listaN[i];
    }
    for(int i = 0; i < m; i++){
        cin >> listaM[i];
    }

    s = listaN[0] + listaM[0];
    listaF.pb(s);
    i = 1%(n);
    j = 1%(m);
    while(go){
        s = listaN[i] + listaM[j];
        if(i == 0 && j == 0) go = false;
        else{
            listaF.pb(s);
            i = (i+1)%n;
            j = (j+1)%m;
        }
    }
    lim = listaF.size();

    cin >> q;
    for(int x = 0; x < q; x++){
        cin >> aux;
        aux = (aux-1)%lim;
        cout << listaF[aux] << endl;
    }
    return 0;
}
