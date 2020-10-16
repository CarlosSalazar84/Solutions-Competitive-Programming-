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

set<string> extend = {".py", ".cpp", ".c", ".java"};

int punto(string p){
    int pos = -1;
    for(int i = p.size()-1; i >= 0; i--){
        if(p[i] == '.'){
            pos = i;
            break;
        }
    }
    return pos;
}

bool runtime(string s, string p){
    bool ok = true;
    int pos = punto(p);
    string name, ex = ".c";
    if(pos != -1){
        name = p.substr(0, pos);
        ex = p.substr(pos);
    }
    else name = p;
    if(!extend.count(ex) || name != s) ok = false;
    return ok;
}

int main(){
    fastIO;
    string s, p, aux;
    vector<string> correct, out;
    int r, d ,e, lim;
    getline(cin, s);
    getline(cin, p);
    cin >> r >> d >> e;
    cin >> lim;
    getline(cin, aux);
    for(int i = 0; i < lim; i++){
        getline(cin, aux);
        correct.pb(aux);
    }
    cin >> lim;
    getline(cin, aux);
    for(int i = 0; i < lim; i++){
        getline(cin, aux);
        out.pb(aux);
    }

    if(!runtime(s, p)) cout << "Compile Error" << endl;
    else if(r) cout << "Run-Time Error" << endl;
    else if(e > d) cout << "Time Limit Exceeded" << endl;
    else{
        bool ac = true;
        if(correct.size() != out.size()) ac = false;
        else{
            for(int i = 0; i < lim; i++){
                if(correct[i] != out[i]) ac = false;
            }
        }
        if(ac) cout << "Correct" << endl;
        else cout << "Wrong Answer" << endl;
    }
    return 0;
}
