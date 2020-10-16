#include<bits/stdc++.h>
using namespace std;

int main(){
    long long ejerciciosPaula,ejerciciosTio,porDiaP,diferencia;
    while(cin >> porDiaP >> ejerciciosTio >> ejerciciosPaula){
        long long a=0,x,y,z;
        x=porDiaP;
        y=porDiaP;
        z=porDiaP;
        diferencia=ejerciciosPaula-ejerciciosTio;
        while(a+x<=diferencia+(porDiaP*y)){
                a+=x;
                x++;
                y++;
                z++;
            }
            cout << z << endl;
    }
    return 0;
}
