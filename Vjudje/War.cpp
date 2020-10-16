#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int Qua[n],Nlo[n],tempQ,tempN,ctr=0,rta;
    vector<int> QuaOrdenado;
    vector<int> NloOrdenado;
    for(int i=0;i<n;i++){
        cin >> Qua[i];
    }
    for(int i=0;i<n;i++){
        cin >> Nlo[i];
    }
    sort(Qua,Qua+n);
    sort(Nlo,Nlo+n);
    for(int i=0;i<n;i++){
        QuaOrdenado.push_back(Qua[i]);
    }
    for(int i=0;i<n;i++){
        NloOrdenado.push_back(Nlo[i]);
    }
    for(int i=0;i<n;i++){
        tempQ=QuaOrdenado.back();
        tempN=NloOrdenado.back();
        if(tempN>tempQ){
            QuaOrdenado.pop_back();
            NloOrdenado.pop_back();
        }else{
            QuaOrdenado.pop_back();
            ctr++;
        }
    }
    rta=n-ctr;
    cout << rta << endl;
    return 0;
}
