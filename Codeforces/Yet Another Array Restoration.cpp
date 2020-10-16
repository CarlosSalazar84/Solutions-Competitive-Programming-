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

const int mod=1e9+7;

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, x, y, aux = 0, in, div, lim;
        vector<int> out;
        cin >> n >> x >> y;
        for(int i = n-1; i > 0; i--){
            div = (y-x);
            if(div%i == 0){
                if(div/i > aux) aux = div/i;
                break;
            }
        }
        in = x;
        while(n && in <= y){
            out.pb(in);
            in += aux;
            n--;
        }

        in = x - aux;
        while(n && in > 0){
            out.pb(in);
            in -= aux;
            n--;
        }

        in = y + aux;
        while(n){
            out.pb(in);
            in += aux;
            n--;
        }

        lim = out.size();
        for(int i = 0; i < lim; i++){
            if(i != lim-1) cout << out[i] << " ";
            else cout << out[i] << endl;
        }
    }
    return 0;
}
