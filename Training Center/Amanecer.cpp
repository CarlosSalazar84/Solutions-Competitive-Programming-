#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,horas,minutos,mayor=0,menor=1001;
        set<int> horasDiferentes;
        cin >> n;
        for(int j=0;j<n;j++){
            int temp;
            cin >> temp;
            horas=temp/60;
            minutos=temp%60;
            temp=(horas*100)+minutos;
            if(mayor<temp) mayor=temp;
            if(menor>temp) menor=temp;
            horasDiferentes.insert(temp);
        }
        cout << "Horas diferentes: " << (int)horasDiferentes.size() << endl;
        cout << "Temprano: " << menor/100 << ":" << menor%100 << endl;
        cout << "Tarde: " << mayor/100 << ":" << mayor%100 << endl;


    }
    return 0;
}
