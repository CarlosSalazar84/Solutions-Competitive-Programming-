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
    int a, b;
    ll rta = 0;
    char c;
    string s;
    cin >> a >> b >> c;
    while(a <= b){
        s = to_string(a);
        for(int i = 0; i < 4; i++){
            if(s[i] == c) rta++;
        }
        a++;
    }
    cout << rta << endl;
    return 0;
}
