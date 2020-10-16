#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
  int f, g, k;
  while(cin >> f){
    cin >> g >> k;
    int aux = f;
    int cnt = 0;
    while(aux < g){
      aux += k;
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}
