#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
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
        bool positivo=false,negativo=false,accepted=true;
        int n;
        cin >> n;
        int a[n],b[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        for(int j=0;j<n;j++){
            cin >> b[j];
            if(b[j]!=a[j]){
                if(a[j]<b[j] && !positivo){
                    accepted=false;
                }
                else if(a[j]>b[j] && !negativo){
                    accepted=false;
                }
            }
            if(!positivo && a[j]>0) positivo=true;
            if(!negativo && a[j]<0) negativo=true;
        }
        if(accepted) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

