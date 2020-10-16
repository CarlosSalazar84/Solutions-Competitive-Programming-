#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false), cin.tie(NULL)
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

int n, k, cnt;
string ini, s;
bool mask[26];

void calc_permutation(){
    if(!k) return;
    if(s.size()==n - cnt){
        k--;
        cout << ini << s << endl;
    }
    else{
        for(int i = cnt; i < n; i++){
            if(mask[i]) continue;
            s += 'A' + i;
            mask[i] = 1;
            calc_permutation();
            s.pob;
            mask[i] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        ini = "", s = "", cnt = 0;
        int lim;
        cin >> n >> k;
        cout << "Case " << i << ":" << endl;
        lim = n - 5;
        for(int j = 0; j < lim; j++){
            ini += 'A' + j;
            cnt++;
        }
        calc_permutation();
    }
    return 0;
}

