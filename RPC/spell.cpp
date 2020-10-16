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

vector<string> dictionary;

bool omitted(string &s, string &p){
   bool ok = true;
   if(p.size() - s.size() != 1) ok = false;
   else{
        int lim = s.size(), cnt = 0;
        for(int i = 0, j = 0; i < lim && j < lim+1; i++,j++){
            if(s[i] !=  p[j]){
                cnt++;
                i--;
            }
        }
        if(cnt > 1) ok = false;
   }
   return ok;
}

bool added(string &s, string &p){
   bool ok = true;
   int cnt = 0;
   if(s.size() - p.size() != 1) ok = false;
   else{
        int lim = p.size(), cnt = 0;
        for(int i = 0, j = 0; i < lim && j < lim+1; i++,j++){
            if(s[j] !=  p[i]){
                cnt++;
                i--;
            }
        }
        if(cnt > 1) ok = false;
   }
   return ok;
}

bool different(string &s, string &p){
   bool ok = true;
   if(s.size() != p.size()) ok = false;
   else{
        int lim = s.size(), cnt = 0;
        for(int i = 0; i < lim; i++){
            if(s[i] !=  p[i]) cnt++;
        }
        if(cnt != 1) ok = false;
   }
   return ok;
}

bool transposed(string &s, string &p){
    bool ok = true;
    if(s.size() != p.size()) ok = false;
    else{
        int lim = s.size(), cnt = 0;
        for(int i = 0; i < lim; i++){
            if(s[i] !=  p[i]){
                if(i == lim-1) ok = false;
                else{
                    if(s[i] == p[i+1] && s[i+1] == p[i]){
                        i++;
                        cnt++;
                    }
                    else ok = false;
                }
            }
        }
        if(cnt != 1) ok = false;
   }
   return ok;
}

int main(){
    fastIO;
    int n, m;
    string s;
    bool un = true;
    cin >> n;
    unordered_set<string> correct;
    for(int i = 0; i < n; i++){
        cin >> s;
        dictionary.pb(s);
        correct.insert(s);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> s;
        cout << s << endl;
        un = true;
        if(correct.count(s)){
            cout << "CORRECT" << endl;
            un = false;
        }
        else{
            for(auto &x:dictionary){
                if(omitted(s, x)){
                    cout << "ONE LETTER OMITTED FROM " << x << endl;
                    un = false;
                }
                if(added(s, x)){
                    cout << "ONE LETTER ADDED TO " << x << endl;
                    un = false;
                }
                if(different(s, x)){
                    cout << "ONE LETTER DIFFERENT FROM " << x << endl;
                    un = false;
                }
                if(transposed(s, x)){
                    cout << "TWO LETTERS TRANSPOSED IN " << x << endl;
                    un = false;
                }
            }
        }
        if(un) cout << "UNKNOWN" << endl;
        cout << endl;
    }
    return 0;
}
