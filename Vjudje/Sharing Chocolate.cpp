#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ctr=0;
    while(cin >> n){
        if(n==0)break;
        ctr++;
        int a[n],h,l,temp=0;
        cin >> h >> l;
        int partes=h*l;
        bool valides=true;
        for(int i=0;i<n;i++){
            cin >> a[i];
            temp+=a[i];
            if(partes%a[i]!=0){
                valides=false;
            }
        }
        if(temp==partes && valides){
            cout << "Case " << ctr << ": Yes" << endl;
        }else{
            cout << "Case " << ctr << ": No" << endl;
        }

    }
    return 0;
}
