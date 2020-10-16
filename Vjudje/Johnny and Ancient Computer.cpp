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

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        ll l1,l2,a,b,rta=0,temp;
        bool go=true;
        cin >> l1 >> l2;
        a=max(l1,l2);
        b=min(l1,l2);
        if(a!=b){
            if(a%b==0) temp=a/b;
            else {go=false;rta--;}
            while(go){
                if(temp%8==0){temp/=8;rta++;}
                else if(temp%4==0){temp/=4;rta++;}
                else if(temp%2==0){temp/=2;rta++;}
                else {rta=-1;go=false;}
                if(temp==1) go=false;
            }
            cout << rta << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}

