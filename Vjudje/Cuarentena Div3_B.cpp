#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n-2;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')s[i]='0';
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0') c++;
    }
    cout << c <<endl;
    return 0;
}
