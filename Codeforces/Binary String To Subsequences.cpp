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
    int t;
    cin >> t;
    while(t--){
        string s;
        vector<int> out,uno,cero;
        int n,lim,cnt=0,rta=0,aux;
        cin >> n;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                    if(cero.size()){
                        aux=cero.back();
                        cero.pob;
                    }
                    else{
                        cnt++;
                        aux=cnt;
                    }
                    uno.pb(aux);
                    out.pb(aux);
            }
            else{
                if(uno.size()){
                        aux=uno.back();
                        uno.pob;
                    }
                    else{
                        cnt++;
                        aux=cnt;
                    }
                    cero.pb(aux);
                    out.pb(aux);
            }
        }
        lim=out.size();
        for(int i=0;i<lim;i++){
            if(rta<out[i]) rta=out[i];
        }
        cout << rta << endl;
        for(int i=0;i<lim;i++){
            if(i==lim-1) cout << out[i] << endl;
            else cout << out[i] << " ";
        }
    }
    return 0;
}
