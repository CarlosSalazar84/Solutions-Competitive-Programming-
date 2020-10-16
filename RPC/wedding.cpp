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
typedef pair<bool,bool> pbb;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

const int MAX = 1e5+4;

int main(){
    fastIO;
    int n, aux = 0, ini = 0, rta;
    cin >> n;
    int lista[n];
    vector<int> LIS;
    map<int,int> ended;
    set<int> numDif;
    for(int i = 0; i < n; i++){
        cin >> lista[i];
        ended[lista[i]] = max(ended[lista[i]],i);
        numDif.insert(lista[i]);
    }
    for(int i = 0; i < n; i++){
        aux = max(aux, ended[lista[i]]);
        if(aux == i){
            sort(lista+ini,lista+i+1, greater<>());
            ini = i+1;
        }
    }
    LIS.pb(lista[0]);
    for(int i = 1; i < n; i++){
        if(lista[i] > LIS.back()) LIS.pb(lista[i]);
        else{
            aux = lower_bound(LIS.begin(), LIS.end(), lista[i]) - LIS.begin();
            LIS[aux] = lista[i];
        }
    }
    rta = numDif.size() - LIS.size();
    cout << rta << endl;
    return 0;
}
