#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rta=2;
    double votos=0,oper;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        votos+=a[i];
    }
    sort(a,a+n);
    oper=votos*0.1;
    if(a[n-1]>=(votos*0.45) || (a[n-1]>=(votos*0.40) && (a[n-1]>=(a[n-2]+oper)))){
        rta=1;
    }
    cout << rta << endl;
    return 0;
}
