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
        int n,m,temp,rta=0;
        bool go=true;
        cin >> n >> m;
        deque<int> lista;
        priority_queue<int> orden;
        for(int j=0;j<n;j++){
            cin >> temp;
            lista.pb(temp);
            orden.push(temp);
        }
        while(go){
            if(lista.front()<orden.top()){
                if(m==0) m=lista.size()-1;
                else m--;
                temp=lista.front();
                lista.pof;
                lista.pb(temp);
            }
            else{
                rta++;
                if(m==0) go=false;
                else{
                    lista.pof;
                    orden.pop();
                    m--;
                }
            }
        }
        cout << rta << endl;
    }
    return 0;
}

