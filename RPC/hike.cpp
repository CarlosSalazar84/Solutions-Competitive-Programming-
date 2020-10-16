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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;


int main(){
    fastIO;
    int n,rta=0,aux,temp;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    aux=max(arr[0],arr[2]);
    for(int i=1;i<n-2;i++){
        temp=max(arr[i],arr[i+2]);
        if(temp<aux){
            aux=temp;
            rta=i;
        }
    }
    cout << rta+1 << " " << aux << endl;
    return 0;
}
