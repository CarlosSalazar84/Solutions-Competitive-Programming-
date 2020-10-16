#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,F,C;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> F >> C;
        if(F>C) cout << "perdimos" << endl;
        else if(F<C) cout << "ganamos" << endl;
        else cout << "casi ganamos" << endl;
    }
    return 0;
}
