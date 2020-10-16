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
    int n,ta,pi,mu,telefonos,taMax=0,piMax=0,muMax=0;
    string nombre,temp;
    cin >> n;
    vector<pair<int,string>> taxi;
    vector<pair<int,string>> pizza;
    vector<pair<int,string>> mujeres;
    vector<pair<int,string>> salidas;
    pair<int,string> extraer;
    for(int i=0;i<n;i++){
        cin >> telefonos >> nombre;
        ta=0;
        pi=0;
        mu=0;
        for(int j=0;j<telefonos;j++){
            cin >> temp;
            bool condicion1=(temp[0]==temp[1] && temp[1]==temp[3] && temp[3]==temp[4] &&
                             temp[4]==temp[6] && temp[6]==temp[7]);
            bool condicion2=(temp[0]>temp[1] && temp[1]>temp[3] && temp[3]>temp[4] &&
                             temp[4]>temp[6] && temp[6]>temp[7]);
            if(condicion1) ta++;
            else if(condicion2) pi++;
            else mu++;
        }
        if(ta>taMax) taMax=ta;
        if(pi>piMax) piMax=pi;
        if(mu>muMax) muMax=mu;
        taxi.push_back({ta,nombre});
        pizza.push_back({pi,nombre});
        mujeres.push_back({mu,nombre});
    }
    cout << "If you want to call a taxi, you should call:";
    for(int i=0;i<taxi.size();i++){
        if(taMax==taxi[i].ft){
            salidas.push_back(taxi[i]);
        }
    }
    for(int i=0;i<salidas.size();i++){
        if(i+1==salidas.size())
            cout << " " << salidas[i].sd << "." << endl;
        else
            cout << " " << salidas[i].sd << ",";
    }
    salidas.clear();
    cout << "If you want to order a pizza, you should call:";
    for(int i=0;i<pizza.size();i++){
        if(piMax==pizza[i].ft){
            salidas.push_back(pizza[i]);
        }
    }
    for(int i=0;i<salidas.size();i++){
        if(i+1==salidas.size())
            cout << " " << salidas[i].sd << "." << endl;
        else
            cout << " " << salidas[i].sd << ",";
    }
    salidas.clear();
    cout << "If you want to go to a cafe with a wonderful girl, you should call:";
    for(int i=0;i<mujeres.size();i++){
        if(muMax==mujeres[i].ft){
            salidas.push_back(mujeres[i]);
        }
    }
    for(int i=0;i<salidas.size();i++){
        if(i+1==salidas.size())
            cout << " " << salidas[i].sd << "." << endl;
        else
            cout << " " << salidas[i].sd << ",";
    }
}
