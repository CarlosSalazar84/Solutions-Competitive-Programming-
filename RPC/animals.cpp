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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int letras[26];

int main(){
    fastIO;
    int n,aux,lim;
    char last;
    bool ac=true,ok=true;;
    string s,read,out;
    vector<string> words;
    cin >> s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> read;
        words.pb(read);
        aux=read[0]-'a';
        letras[aux]++;
    }
    last=s[s.size()-1];
    aux=last-'a';
    if(letras[aux]==0) cout << "?" << endl;
    else{
        letras[aux]--;
        lim=words.size();
        for(int i=0;i<lim;i++){
            if(ac && words[i][0]==last) {out=words[i];ac=false;}
            aux=words[i][words[i].size()-1]-'a';
            if(words[i][0]==last && letras[aux]==0){
                cout << words[i] <<  "!" << endl;
                ok=false;
                break;
            }
        }
        if(ok) cout << out << endl;
    }
    return 0;
}
