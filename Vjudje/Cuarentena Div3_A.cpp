#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n;
    int a[n];
    set<int> s;
    vector<int> c;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(!(s.count(a[i]))){
            c.push_back(a[i]);
        }
        s.insert(a[i]);
    }
    t=c.size();
    int b[t];
    for(int i=0;i<t;i++){
        int j=c.back();
        b[i]=j;
        c.pop_back();
    }
    cout << t << endl;
    for(int i=0;i<t;i++){
        if(i==t-1)cout << b[i] << endl;
        else cout << b[i] << " ";
    }
    return 0;
}
