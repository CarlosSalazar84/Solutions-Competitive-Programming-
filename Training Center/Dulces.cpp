#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main(){
    int a,b,c;
    while(cin >> a){
        cin >> b >> c;
        int dAB,dBC,dAC,orden,repartir,Daniel,Daniela;
        int temp,residuo,rta;
        dAB=abs(a-b);
        dBC=abs(b-c);
        dAC=abs(a-c);
        orden=min({dAB,dBC,dAC});
        if(orden==dAB){
            repartir=c;
            Daniel=a;
            Daniela=b;

        }
        else if(orden==dBC){
            repartir=a;
            Daniel=b;
            Daniela=c;

        }
        else{
            repartir=b;
            Daniel=a;
            Daniela=c;

        }
        temp=repartir/2;
        residuo=repartir%2;
        Daniel+=temp;
        Daniela+=temp;
        rta=min(Daniel,Daniela)+residuo;
        rta=min(rta,max(Daniel,Daniela));
        cout << rta << endl;
    }
    return 0;
}
