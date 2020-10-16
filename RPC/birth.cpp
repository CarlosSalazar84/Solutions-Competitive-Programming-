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

int main(){
    fastIO;
    int n;
    cin >> n;
    string s;
    set<string> lista;
    for(int i = 0; i < n; i++){
        cin >> s;
        lista.insert(s);
    }
    cout << lista.size() << endl;
    return 0;
}
