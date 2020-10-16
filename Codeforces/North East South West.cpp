#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,int> pll;

int direccion=1;
void girar(string s){
    if(s=="right"){
        direccion++;
        if(direccion==5) direccion=1;
    }
    else if(s=="left"){
        direccion--;
        if(direccion==0) direccion=4;
    }
    else{
        direccion+=2;
        if(direccion>4) direccion-=4;
    }
}

int main(){
    #ifndef LOCAL
        fastIO;
    #endif
    int movements;
    cin >> movements;
    while(movements){
        string instruccion;
        cin >> instruccion;
        girar(instruccion);
        cout << direccion << endl;
        movements--;
    }
    if(direccion==1) cout << "north" << endl;
    else if(direccion==2) cout << "east" << endl;
    else if(direccion==3) cout << "south" << endl;
    else cout << "west" << endl;
    return 0;
}
