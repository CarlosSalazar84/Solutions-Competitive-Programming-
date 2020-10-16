#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<string> pila;
    string temp;
    bool vacio;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp=="PUSH"){
            cin >> temp;
            pila.push(temp);
        }else{
            vacio=pila.empty();
            if(vacio) cout << "-" << endl;
            else{
                temp=pila.top();
                pila.pop();
                cout << temp << endl;
            }
        }
    }
    return 0;
}
