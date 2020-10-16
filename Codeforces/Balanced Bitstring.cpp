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
        int n, k;
        int unos = 0, ceros = 0, nul = 0, aux;
        string s;
        cin >> n >> k;
        cin >> s;
        bool AC = true;

        for(int i = 0; i < n; i++){
            if(i+k < n && s[i] !=  '?'){
                if(s[i] != s[i+k] && s[i+k]!='?') AC = false;
                else s[i+k] = s[i];
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(i-k > -1 && s[i] !=  '?'){
                if(s[i] != s[i-k] && s[i-k]!='?') AC = false;
                else s[i-k] = s[i];
            }
        }

        for(int i = 0; i < k; i++){
            if(s[i] == '1') unos++;
            else if(s[i] == '0') ceros++;
            else nul++;
        }
        aux = max(unos,ceros)-min(unos,ceros);
        if(aux > nul) AC = false;

        if(AC) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
