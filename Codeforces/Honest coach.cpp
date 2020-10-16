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
        int n,d=1003,indice=0;
        cin >> n;
        int a[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        sort(a,a+n);
        for(int j=0;j<n-1;j++){
            if(a[j+1]-a[j]<d){
                d=a[j+1]-a[j];
                indice=j;
            }
        }
        cout << a[indice+1]-a[indice] << endl;
    }
    return 0;
}

