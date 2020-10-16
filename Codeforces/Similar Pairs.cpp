#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
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
        bool accepted=false;
        vector<int> pares;
        vector<int> impares;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> temp;
            if(temp%2==0) pares.push_back(temp);
            else impares.push_back(temp);
        }
        if(pares.size()%2==0 && impares.size()%2==0) accepted=true;
        else{
            for(int i=0;i<pares.size();i++){
                for(int j=0;j<impares.size();j++){
                    if(accepted){
                        i=pares.size();
                        j=impares.size();
                    }
                    if(abs(pares[i]-impares[j])==1) accepted=true;
                }
            }
        }
        if(accepted) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

