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

int main(){
    fastIO;
    int a, b, c, aux;
    set<int> cnt;
    cin >> a >> b >> c;
    aux = b;
    while(aux < a){
        cnt.insert(aux);
        aux += b;
    }
    aux = c;
    while(aux < a){
        cnt.insert(aux);
        aux += c;
    }
    cout << cnt.size() << endl;
    return 0;
}
