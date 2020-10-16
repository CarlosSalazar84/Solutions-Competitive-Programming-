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

int main(){
    fastIO;
    string s,aux;
    int n,des=1,lim;
    getline(cin,s);
    lim=s.size();
    for(int i=0;i<lim;i++){
        if(s[i]==' ') des++;
    }
    cin >> n;
    vector<string> names,team1,team2;
    for(int i=0;i<n;i++){
        cin >> aux;
        names.pb(aux);
    }
    int c=des,ind=0,turn=0;
    while(names.size()){
        while(c){
            c--;
            if(c==0){
                if(turn%2==0) team1.pb(names[ind]);
                else team2.pb(names[ind]);
                turn++;
                names.erase (names.begin()+ind);
                ind--;
            }
            ind++;
            if(ind==names.size()) ind=0;
        }
        c=des;
    }
    cout << team1.size() << endl;
    for(auto &x:team1) cout << x << endl;
    cout << team2.size() << endl;
    for(auto &x:team2) cout << x << endl;
    return 0;
}
