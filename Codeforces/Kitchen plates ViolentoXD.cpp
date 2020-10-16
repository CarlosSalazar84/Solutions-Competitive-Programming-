#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,int> pll;

vector<vector<char>> cadenas;
vector<char> permutation;
bool chosen[6];

void search(){
    if(permutation.size()==5) {
        cadenas.push_back(permutation);
    }
    else{
        for(int i=0;i<5;i++) {
            if(chosen[i]) continue;
            chosen[i]=true;
            permutation.push_back(i);
            search();
            chosen[i]=false;
            permutation.pop_back();
        }
    }
}

int main(){
    #ifndef LOCAL
        fastIO;
    #endif
    memset(chosen,0,sizeof(chosen));
    search();
    char a,b,c;
    vector<pcc> entradas;
    bool imposible=true;
    for(int i=0;i<5;i++){
        cin >> a >> b >> c;
        if(b=='<'){
            entradas.push_back({a,c});
        }
        else{
            entradas.push_back({c,a});
        }
    }
    for(auto &x:cadenas){
        int favorables=0;
        for(int i=0;i<5;i++){
            int menor=entradas[i].ft-'A';
            int mayor=entradas[i].sd-'A';
            if(x[menor]<x[mayor]) favorables++;
        }
        if(favorables==5){
            vector<char> rta(5);
            for(int i=0;i<5;i++){
                rta[x[i]]=char(i+'A');
            }
            for(auto &y:rta){
                cout << y;
            }
            cout << endl;
            imposible=false;
        }
        if(!imposible) break;
    }
    if(imposible) cout << "impossible" << endl;
    return 0;
}
