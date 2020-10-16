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

const int MAX=30;
bool matriz[MAX][MAX];

void calcular(){

}

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,m;
        cin >> n >> m;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin >> matriz[j][k];
            }
        }
    }
    return 0;
}

