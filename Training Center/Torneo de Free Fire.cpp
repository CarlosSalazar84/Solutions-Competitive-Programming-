#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,sillas,router,radio,salida,indice;
    cin >> t;
    for(int i=0;i<t;i++){
        salida=0;
        indice=0;
        cin >> sillas >> router >> radio;
        int rta[router]={};
        int jugadoresX[sillas],jugadoresY[sillas];
        int routerX[router],routerY[router];
        for(int j=0;j<sillas;j++){
            cin >> jugadoresX[j] >> jugadoresY[j];
        }
        for(int j=0;j<router;j++){
            cin >> routerX[j] >> routerY[j];
        }
        for(int j=0;j<router;j++){
            for(int k=0;k<sillas;k++){
                if((radio*radio)>=((jugadoresX[k]-routerX[j])*(jugadoresX[k]-routerX[j]))+((jugadoresY[k]-routerY[j])*(jugadoresY[k]-routerY[j]))){
                    rta[j]++;
                }
            }
        }
        for(int j=0;j<router;j++){
            if(salida<rta[j]){
                salida=rta[j];
                indice=j;
            }
        }
        cout << routerX[indice] << " " << routerY[indice] << " " << rta[indice] << endl;
    }
    return 0;
}
