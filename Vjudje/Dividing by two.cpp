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
    int a,b,rta=0;
    cin >> a >> b;
    if(a<=b) rta=b-a;
    else{
        while(a>b){
            if(a%2==0) a/=2;
            else a++;
            rta++;
        }
        rta+=b-a;
    }
    cout << rta << endl;
    return 0;
}
