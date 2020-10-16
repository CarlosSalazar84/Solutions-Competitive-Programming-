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
    string inicial[]={"yes","no","yes","no","yes","no","yes","no","yes","no","no"};
    string extras[]={"yes","no","yes","no","yes","no","yes","no","yes","no","yes","no","no"};
    int n,aux;
    cin >> n;
    aux=n-2018;
    if(aux<11)
       cout << inicial[aux] << endl;
    else{
       aux-=11;
       cout << extras[(aux%13)] << endl;
    }
    return 0;
}
