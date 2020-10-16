#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
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
        int n,temp;
        vector<int> impar;
        vector<int> par;
        cin >> n;
        n*=2;
        for(int j=1;j<=n;j++){
            cin >> temp;
            if(temp%2==1){
                impar.pb(j);
            }else{
                par.pb(j);
            }
        }
        if(impar.size()>0 && impar.size()%2==0){
            impar.pob;
            impar.pob;
        }
        else if(impar.size()>0){
            par.pob;
            impar.pob;
        }
        else{
            par.pob;
            par.pob;
        }
        for(int j=0;j<impar.size();j+=2){
            cout << impar[j] << " " << impar [j+1] << endl;
        }
        for(int j=0;j<par.size();j+=2){
            cout << par[j] << " " << par [j+1] << endl;
        }
    }
    return 0;
}

