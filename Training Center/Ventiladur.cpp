#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,H,rta;
    double CA,PI=acos(-1);;
    while(cin >> L >> H){
        CA=H/tan(PI/3);
        rta=ceil(L/CA)+1;
        cout << rta << endl;
    }

}
