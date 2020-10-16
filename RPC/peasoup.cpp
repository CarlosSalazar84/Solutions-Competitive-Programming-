#include<bits/stdc++.h>
using namespace std;

int main(){
    string nombre,aux,data;
    int n,temp;
    getline(cin,data);
    n=atoi(data.data());
    bool go=true;
    for(int i=0;i<n;i++){
        getline(cin,data);
        temp=atoi(data.data());
        getline(cin,nombre);
        int ctr=0;
        bool p=false;
        bool ps=false;
        for(int j=0;j<temp;j++){
            getline(cin,aux);
            if(aux=="pancakes") p=true;
            else if(aux=="pea soup") ps=true;
        }
        if(p && ps){
            go=false;
            cout << nombre << endl;
            break;
        }
    }
    if(go) cout << "Anywhere is fine I guess" << endl;
    return 0;
}
