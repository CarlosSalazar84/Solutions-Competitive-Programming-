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

bool cmp(string &s, string &p){
    string aux1, aux2;
    aux1 = s + p;
    aux2 = p + s;
    return aux1 < aux2;
}

int main() {
    fastIO;
    int n;
    cin >> n;
    string s, out = "";
    vector<string> in;
    for(int i = 0; i < n; i++){
        cin >> s;
        in.pb(s);
    }
    sort(in.begin(),in.end(),cmp);
    for(auto &x:in) out += x;
    cout << out << endl;
    return 0;
}

