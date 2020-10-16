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
        int n,ctr=0,dos=0,tres=0,temp;
        cin >> n;
        temp=n;
        cout << "STEP !" << endl;
        while(temp%2==0){
            dos++;
            temp/=2;
            cout << temp;
        }
        cout << "STEP !" << endl;
        while(temp%3==0){
            tres++;
            temp/=3;
            cout << temp << endl;
        }
        if(dos>tres || temp!=1) cout << -1 << endl;
        else{
            while(n!=1){
                ctr++;
                if(n%6==0) n/=6;
                else n*=2;
                cout << ctr << endl;
            }
        }
    }
    return 0;
}
