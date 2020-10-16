#include<bits/stdc++.h>
using namespace std;

int main(){
    long long ejerciciosPaula,ejerciciosTio,porDiaP;
    while(cin >> porDiaP >> ejerciciosTio >> ejerciciosPaula){
            long long b=0,e=1e9,x,m;
            while(b<e){
                m=(b+e)/2;
                if(ejerciciosTio+(m*(m+1)/2)>ejerciciosPaula+(m*porDiaP)){
                    e=m;
                }else{
                    b=m+1;
                }
            }
            x=b;
            cout << x << endl;
    }
    return 0;
}
