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
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

map<string,ll> lista[26];

int main(){
    fastIO;
    int n;
    ll aux, cnt, sum, rta = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        aux = s[0] - 'A';
        lista[aux][s]++;
    }

    for(int i = 0; i < 26; i++){
        cnt = 0, sum = 0;
        for(auto &x:lista[i]){
            cnt += x.sd;
            if(x.sd > 1){
                sum += (x.sd-1)*(x.sd)/2;
            }
        }

        rta += (cnt-1)*(cnt)/2;
        rta -= sum;
    }
    rta *= 2;
    cout << rta << endl;
    return 0;
}
