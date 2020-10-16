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
    int n,temp;
    set<int> s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        s.insert(temp);
    }
    if(s.size()>1){
        temp=*s.begin();
        temp=*s.upper_bound(temp);
        cout << temp << endl;
    }
    else cout << "NO" << endl;
    return 0;
}

