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
    int t;
    cin >> t;
    while(t--){
        int n, aux;
        ll rta = 0;
        cin >> n;
        vector<int> in(n);
        bool END = false;
        for(int i = 0; i < n; i++){
            cin >> in[i];
        }
        for(int i = 0, j = 0; i < n; i++){
            if(in[i] > 0){
                if(j <= i) j = i + 1;
                while(j < n && in[i] > 0){
                    while(j < n && in[j] >= 0) j++;
                    if(j == n) END = true;
                    else{
                        if(in[i] >= abs(in[j])){
                            in[i] += in[j];
                            in[j] = 0;
                        }
                        else{
                            in[j] += in[i];
                            in[i] = 0;
                        }
                    }
                }
            }
            if(END) break;
        }

        for(int i = 0; i < n; i++){
            if(in[i] > 0) rta += in[i];
        }

        cout << rta << endl;
    }
    return 0;
}
