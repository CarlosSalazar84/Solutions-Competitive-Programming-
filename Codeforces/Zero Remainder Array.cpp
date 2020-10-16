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

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k,aux;
        ll temp,rta=0;
        cin >> n >> k;
        map<int,int> apariciones;
        set<ll> numeros;
        for(int j=0;j<n;j++){
            cin >> aux;
            if(aux<k) apariciones[k-aux]++;
            else if (aux%k!=0 && aux>k) apariciones[k-(aux%k)]++;
        }
        for(auto &x:apariciones){
            if(!numeros.count(x.ft)){
                numeros.insert(x.ft);
                x.sd--;
            }
            temp=x.ft+k;
            while(x.sd!=0){
                while(numeros.count(temp)) temp+=k;
                numeros.insert(temp);
                x.sd--;
            }
        }
        if(!numeros.empty()) rta=*numeros.rbegin()+1;
        cout << rta << endl;
    }
    return 0;
}
