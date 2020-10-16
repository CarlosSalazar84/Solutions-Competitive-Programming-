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

bool succes[102];

int main(){
    fastIO;
    int n,m,aux,rta=0,ind;
    string s;
    cin >> n >> m;
    vector<pii> notas[m];
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<m;j++){
            aux=s[j]-'0';
            notas[j].pb({aux,i});
        }
    }
    for(int i=0;i<m;i++){
        sort(notas[i].rbegin(),notas[i].rend());
    }
    for(int i=0;i<m;i++){
        aux=notas[i][0].ft;
        ind=0;
        while(ind<n && notas[i][ind].ft>=aux){
            succes[notas[i][ind].sd]=true;
            ind++;
        }
    }
    for(int i=0;i<n;i++){
        if(succes[i]) rta++;
    }
    cout << rta << endl;
    return 0;
}
