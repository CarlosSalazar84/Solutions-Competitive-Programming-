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

const int MAX = 2e5+3;
int data[MAX];
ll inv;

void merge_sort(int l, int r){
    if(l == r) return;
    int m = (l+r)/2;
    merge_sort(l,m);
    merge_sort(m+1,r);

    queue<int> L, R;
    for(int i = l; i <= m; i++){
        L.push(data[i]);
    }
    for(int i = m+1; i <= r; i++){
        R.push(data[i]);
    }

    for(int i = l; i <= r; i++){
        if(L.empty()){
            data[i] = R.front();
            R.pop();
        }
        else if(R.empty()){
            data[i] = L.front();
            L.pop();
        }
        else{
            if(L.front() <= R.front()){
                data[i] = L.front();
                L.pop();
            }
            else{
                data[i] = R.front();
                R.pop();
                inv += L.size();
            }
        }
    }
}

int main() {
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> data[i];
        }
        merge_sort(0,n-1);
        cout << inv << endl;
        inv = 0;
    }
    return 0;
}

