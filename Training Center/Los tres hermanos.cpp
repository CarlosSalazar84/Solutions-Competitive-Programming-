#include<bits/stdc++.h>
using namespace std;

int main(){
    int d;
    int a,b,c;
    while(cin >> d){
        a=d/3;
        b=d/3;
        c=d/3;
        if(d%3==1){
            a++;
        }
        if(d%3==2){
            a++;
            b++;
        }
        cout << a << " " << b << " " << c << endl;
    }
}
