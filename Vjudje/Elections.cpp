#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rta=2,oper;
    double votos,oper2;
    cin >> n;
    int a[n],temp[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        temp[i]=a[i];
    }
    for(int i=0;i<n;i++){
        votos+=a[i];
    }
    sort(temp,temp+n);
    oper=temp[n-2];
    oper2=votos*0.1;
    for(int i=0;i<n;i++){
        if(a[i]>(votos*0.45) || (a[i]>(votos*0.40) && (a[i]>(oper+oper2)))){
            rta=1;
        }
    }
    cout << rta << endl;
    return 0;
}
