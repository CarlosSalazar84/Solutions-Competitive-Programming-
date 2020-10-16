#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> t[4];
    for(int i=0;i<4;i++) {
        t[i].push_back(')');
    }
    for(int i=0;i<4;i++) {
        cout << t[i].back();
    }
    return 0;
}
