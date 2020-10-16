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
        int n,k,residuo,redestribuir;
        cin >> n >> k;
        int cadena[k];
        if(n>=k){
            if(n%2==0 && n/2>=k){
                residuo=n%k;
                redestribuir=n/k;
                if(redestribuir%2==1){
                    redestribuir--;
                    residuo+=k;
                }
                for(int j=0;j<k;j++){
                    cadena[j]=redestribuir;
                }
                cadena[0]+=residuo;
                cout << "YES" << endl;
                for(int j=0;j<k;j++){
                    if(j+1==k) cout << cadena[j] << endl;
                    else cout << cadena[j] << " ";
                }
            }
            else if(n%2==0 && n/2<k){
                residuo=n%k;
                redestribuir=n/k;
                for(int j=0;j<k;j++){
                    cadena[j]=redestribuir;
                }
                if(residuo%2==0){
                    cadena[0]+=residuo;
                    cout << "YES" << endl;
                    for(int j=0;j<k;j++){
                        if(j+1==k) cout << cadena[j] << endl;
                        else cout << cadena[j] << " ";
                    }
                }
                else cout << "NO" << endl;
            }
            else if(n%2==1){
                residuo=n%k;
                redestribuir=n/k;
                if(redestribuir%2==0){
                    redestribuir--;
                    residuo+=k;
                }
                if(residuo%2==0){
                    for(int j=0;j<k;j++){
                        cadena[j]=redestribuir;
                    }
                    cadena[0]+=residuo;
                    cout << "YES" << endl;
                    for(int j=0;j<k;j++){
                        if(j+1==k) cout << cadena[j] << endl;
                        else cout << cadena[j] << " ";
                    }
                }
                else cout << "NO" << endl;
            }
        }
        else cout << "NO" << endl;
    }
    return 0;
}
