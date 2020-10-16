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
    stack<int> pila,aux;
    int n,temp,rta=0;
    cin >> n;
    n*=2;
    for(int i=0;i<n;i++){
        cin >> temp;
        pila.push(temp);
    }
    while(pila.size()){
        rta++;
        if(aux.size() && aux.top()==pila.top()){
            pila.pop();
            aux.pop();
        }
        else{
           temp=pila.top();
           pila.pop();
           aux.push(temp);
        }
    }
    if(aux.empty()) cout << rta << endl;
    else cout << "impossible" << endl;
    return 0;
}
