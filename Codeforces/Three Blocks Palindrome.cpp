#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,maximoTamanio=0;
        bool iguales=true;
        vector<int> subconjuntos,temp;
        set<int> repetidos;
        cin >> n;
        int conjunto[n];
        for(int j=0;j<n;j++){
            cin >> conjunto[j];
        }
        for(int j=0;j<n;j++){
            for(int k=1;k<n;k++){
                    if(j+k==n) break;
                    for(int l=j+k-1;l<j+k;l++){
                        subconjuntos.push_back(conjunto[l]);
                        temp.push_back(conjunto[l]);
                        repetidos.insert(conjunto[l]);
                    }
                    /*for(int l=0;l<subconjuntos.size();l++){
                        cout << subconjuntos[l]<< " ";
                    }
                    cout << endl;*/
                    if(repetidos.size()<3){
                        reverse(temp.begin(),temp.end());
                        for(int l=0;l<subconjuntos.size();l++){
                            if(temp[l]!=subconjuntos[l]){
                                iguales=false;
                                break;
                            }
                        }
                        reverse(temp.begin(),temp.end());
                        if(iguales && subconjuntos.size()>maximoTamanio){
                            maximoTamanio=subconjuntos.size();
                        }else iguales=true;
                    }else break;
            }
            subconjuntos.clear();
            temp.clear();
            repetidos.clear();
        }
        cout << maximoTamanio << endl;
    }
    return 0;
}
