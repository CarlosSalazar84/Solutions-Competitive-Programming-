#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int n,m,indice=0;
    long long temp,suma=0,dif;
    bool imposible=false,salir=false;
    cin >> n >> m;
    int bloques[m];
    int rta[m];
    for(int i=0;i<m;i++){
        cin >> bloques[i];
    }
    for(int i=0;i<m;i++){
        suma+=bloques[i];
    }
    dif=suma-n;
    temp=bloques[0];
    for(int i=0;i<m;i++){
        if(i==0){
            if(temp>n){
                imposible=true;
                break;
            }
        }
        else{
            temp-=bloques[i-1];
            temp+=bloques[i];
            temp++;
            if(temp>n){
                imposible=true;
                break;
            }
        }
    }
    if((suma<n) || imposible) cout << -1 << endl;
    else{
        while(!salir){
            if(dif==0) salir=true;
            else{
                if(bloques[indice]==1){
                    indice++;
                }
                else{
                    if(bloques[indice]<=dif){
                        dif-=(bloques[indice]-1);
                        bloques[indice]-=bloques[indice]-1;
                    }else{
                        bloques[indice]-=dif;
                        dif=0;
                    }
                }
            }
        }
        rta[0]=1;
        for(int i=1;i<m;i++){
            rta[i]=rta[i-1]+bloques[i-1];
        }
        for(int i=0;i<m;i++){
            if(i!=m-1) cout << rta[i] << " ";
            else cout << rta[i] << endl;
        }
    }
    return 0;
}
