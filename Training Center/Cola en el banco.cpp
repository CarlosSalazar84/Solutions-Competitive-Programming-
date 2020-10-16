#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main(){
  int t, n, k;
  cin >> t;
  while(t--){
    cin >> n >> k;
    int clientes[n];
    int tiempo[n];

    for(int i = 0; i<n; i++){
      cin >> clientes[i];
    }
    tiempo[0] = 0;

    cout << 0;
    for(int i = 1; i<n; i++){
      tiempo[i] = tiempo[i-1] + clientes[i-1] + k - clientes[i];
      if(tiempo[i] < 0) tiempo[i] = 0;
      cout << " " << tiempo[i];
    }
    cout << endl;
  }
  return 0;
}
