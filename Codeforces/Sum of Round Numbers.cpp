#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,temp,divisor=10,digitos=1,salida,contador;
        vector<int> respuesta;
        cin >> n;
        temp=n;
        while(temp/divisor!=0){
            digitos++;
            divisor*=10;
        }
        divisor=10;
        while(digitos>0){
            if(n%divisor!=0){
                respuesta.push_back(n%divisor);
                n-=n%divisor;
                divisor*=10;
            }
            else if(n%divisor==0 && digitos==1){
                respuesta.push_back(n);
            }
            else divisor*=10;
            digitos--;
        }
        cout << (int)respuesta.size() << endl;
        for(int j=0;j<respuesta.size();j++){
            if(j+1==respuesta.size())
                cout << respuesta[j] << endl;
            else
                cout << respuesta[j] << " ";
        }
    }
    return 0;
}
