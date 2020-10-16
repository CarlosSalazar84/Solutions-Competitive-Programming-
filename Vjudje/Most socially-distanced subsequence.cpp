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
        int n,temp,lim;
        cin >> n;
        int data[n];
        vector<int> rta;
        for(int j=0;j<n;j++){
            cin >> data[j];
        }
        temp=data[0];
        rta.pb(temp);
        for(int j=1;j<n;j++){
            while(j<n-1 && temp==data[j]) j++;
            if(j==n-1) rta.pb(data[j]);
            else if(j<n-1){
                if(temp>data[j]){
                    while(j<n-1 && data[j]>=data[j+1]) j++;
                    rta.pb(data[j]);
                    temp=data[j];
                }else{
                    while(j<n-1 && data[j]<=data[j+1]) j++;
                    rta.pb(data[j]);
                    temp=data[j];
                }
            }
        }
        lim=rta.size();
        cout << lim << endl;
        for(int j=0;j<lim;j++){
            if(j==lim-1) cout << rta[j] << endl;
            else cout << rta[j] << " ";
        }
    }
    return 0;
}

