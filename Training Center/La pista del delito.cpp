#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int rta,oper,posicion;
        int a[n+1];
        a[0]=0;
        for(int i=1;i<n+1;i++){
            cin >> a[i];
        }
        for(int i=1;i<n+1;i++){
            rta=0;
            int temp[n+1]={};
            temp[i]=1;
            for(int j=i;j<n+1;j++){
                if(j==i){
                    oper=a[j];
                    posicion=a[j];
                }
                else{
                    oper=a[posicion];
                    posicion=oper;
                }
                if(temp[oper]==1){
                    rta=oper;
                    break;
                }
                else{
                    temp[oper]=1;
                }
            }
            if(rta==0){
                for(int j=n+1-i;j<n+1;j++){
                    oper=a[posicion];
                    posicion=oper;
                    if(temp[oper]==1){
                        rta=oper;
                        break;
                    }
                    else{
                        temp[oper]=1;
                    }
                }
            }
            if(i<n) cout << rta << " ";
            else cout << rta << endl;
        }
    }
}
