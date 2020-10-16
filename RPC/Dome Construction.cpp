#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define F first
#define S second


double calcularDis(double x, double y, double z){
  double dis;
  dis=((x*x)+(y*y)+(z*z));
  return dis;
}

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int k,n;
    cin >> n >> k;
    double dis[n];
    for(int i=0;i<n;i++){
      double x,y,z;
      cin >> x >> y >> z;
      dis[i]=calcularDis(x,y,z);
    }
    sort(dis, dis+n);
    cout << fixed << setprecision(6) << sqrt(dis[k-1]) << endl;
    return 0;
}
