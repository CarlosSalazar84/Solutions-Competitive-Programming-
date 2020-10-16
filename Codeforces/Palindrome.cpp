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
    int n,rta=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int lim,tam;
        bool ok=true;
        string s;
        cin >> s;
        tam=s.size();
        lim=tam/2;
        for(int j=0;j<lim;j++){
            if(s[j]!=s[tam-j-1]){
                ok=false;
                break;
            }
        }
        if(ok) rta++;
    }
    cout << rta << endl;
    return 0;
}
