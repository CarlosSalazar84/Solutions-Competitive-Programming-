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
    int t;
    cin >> t;
    while(t--){
        string in, out = "";
        char aux;
        ll lim, r = 0, p = 0, s = 0, rta = 0;
        cin >> in;
        lim = in.size();
        for(int i = 0; i < lim; i++){
            if(in[i] == 'R') p++;
            else if(in[i] == 'S') r++;
            else s++;
        }
        if(max({r,p,s}) == r) aux = 'R';
        else if(max({r,p,s}) == p) aux = 'P';
        else aux = 'S';
        for(int i = 0; i < lim; i++) out += aux;
        cout << out << endl;
    }
    return 0;
}
