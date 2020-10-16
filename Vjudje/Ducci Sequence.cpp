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
        int n,ctr;
        bool zero=false;
        cin >> n;
        int data[n];
        for(int j=0;j<n;j++){
            cin >> data[j];
        }
        for(int l=0;l<1000;l++){
            ctr=0;
            vector<int> arr;
            for(int j=0;j<n;j++){
                arr.pb(data[j]);
            }
            for(int j=0;j<n;j++){
                if(j==0) data[j]=abs(arr[1]-arr[n-1]);
                else if(j==n-1) data[j]=abs(arr[0]-arr[n-2]);
                else data[j]=abs(arr[j-1]-arr[j+1]);
                if(data[j]==0) ctr++;
                if(ctr==n){
                    zero=true;
                    j=n;
                    l=1000;
                }
            }
        }
        if(zero) cout << "ZERO" << endl;
        else cout << "LOOP" << endl;
    }
    return 0;
}

