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

int main(){
    int n,m,lim;
    cin >> n >> m;
    vector<string> bad;
    vector<string> plates;
    string aux;
    for(int i=0;i<n;i++){
        cin >> aux;
        bad.pb(aux);
    }
    for(int i=0;i<m;i++){
        cin >> aux;
        lim=aux.size();
        for(int j=0;j<lim;j++){
            if(aux[j]=='0') aux[j]='O';
            else if(aux[j]=='1') aux[j]='L';
            else if(aux[j]=='2') aux[j]='Z';
            else if(aux[j]=='3') aux[j]='E';
            else if(aux[j]=='5') aux[j]='S';
            else if(aux[j]=='6') aux[j]='B';
            else if(aux[j]=='7') aux[j]='T';
            else if(aux[j]=='8') aux[j]='B';
        }
        plates.pb(aux);
    }
    for(int i=0;i<m;i++){
        string good=plates[i];
        bool valid=true;
        for(int j=0;j<n;j++){
            string mala=bad[j];
            if(good.find(mala)!=-1) {valid=false;break;}
        }
        if(valid) cout << "VALID" << endl;
        else cout << "INVALID" << endl;
    }
    return 0;
}
