#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,temp,s;
        cin >> a >> b;
        if(a%b==0)s=0;
        else if(a<b)s=b-a;
        else{
           temp=a/b;
           temp++;
           s=b*temp-a;
    }
    cout << s << endl;
    }
}
