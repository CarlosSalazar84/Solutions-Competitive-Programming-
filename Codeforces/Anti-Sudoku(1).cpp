#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string sudoku[9];
        for(int j=0;j<9;j++){
            cin >> sudoku[j];
        }
        for(int j=0;j<9;j++){
            for(int k=0;k<9;k++){
                if(sudoku[j][k]=='1')sudoku[j][k]='2';
            }
        }
        for(int j=0;j<9;j++){
            cout << sudoku[j];
            cout << endl;
        }
    }
    return 0;
}
