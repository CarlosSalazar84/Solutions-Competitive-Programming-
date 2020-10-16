#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int sudoku[9][9];
string s[9];
int used;

void init(){
    used = 0;
    for(int i = 0; i < 9 ; i++){
        for(int j = 0; j < 9 ; j++){
            sudoku[i][j] = 1023;
        }
    }
}

void calc_lines(int i, int j, int n){
    int aux = 1023 ^ 1<<n;
    for(int l = 0; l < 9 ; l++){
        sudoku[i][l] = sudoku[i][l]&aux;
    }
    for(int l = 0; l < 9 ; l++){
        sudoku[l][j] = sudoku[l][j]&aux;
    }
}

void calc_squares(int i, int j, int n){
    int v = (i/3)*3, h = (j/3)*3;
    int aux = 1023 ^ 1<<n;
    for(int l = v; l < v + 3 ; l++){
        for(int m = h; m < h + 3 ; m++){
            sudoku[l][m] = sudoku[l][m]&aux;
        }
    }
}

void search_column(){
    for(int num = 0; num < 10; num++){
        for(int i = 0; i < 9; i++){
            int aux = 1<<num, cnt = 0, j;
            for(int l = 0; l < 9 ; l++){
                if(sudoku[i][l] & aux) cnt++;
                if(cnt == 1) j = l;
            }

            if(cnt == 1){
                calc_lines(i,j,num);
                calc_squares(i,j,num);
                s[i][j] = char(num + '0');
                sudoku[i][j] = 0;
                used++;
            }
        }
    }
}

void search_row(){
    for(int num = 0; num < 10; num++){
        for(int j = 0; j < 9; j++){
            int aux = 1<<num, cnt = 0, i;
            for(int l = 0; l < 9 ; l++){
                if(sudoku[l][j] & aux) cnt++;
                if(cnt == 1) i = l;
            }

            if(cnt == 1){
                calc_lines(i,j,num);
                calc_squares(i,j,num);
                s[i][j] = char(num + '0');
                sudoku[i][j] = 0;
                used++;
            }
        }
    }
}

void search_square(){
    vector<pii> ini = {{0,0}, {0,3}, {0,6}, {3,0}, {0,3}, {0,6}, {6,0}, {6,3}, {6,6}};
    //vector<pii> ini = {{6,0}};
    for(int num = 0; num < 10; num++){
        for(int p = 0; p < /*1*/9; p++){
            int aux = 1<<num, cnt = 0, r, c;
            for(int i = ini[p].ft; i < ini[p].ft + 3 ; i++){
                for(int j = ini[p].sd; j < ini[p].sd + 3 ; j++){
                    if(sudoku[i][j] & aux) cnt++;
                    if(cnt == 1){
                        r = i;
                        c = j;
                    }
                }
            }

            if(cnt == 1){
                cout << r << " " << c << " " << num << endl;
                bitset<10> out = sudoku[r][c];
                cout << out << endl;
                calc_lines(r,c,num);
                calc_squares(r,c,num);
                s[r][c] = char(num + '0');
                sudoku[r][c] = 0;
                used++;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        init();
        for(int j = 0; j < 9; j++){
            cin >> s[j];
        }
        for(int j = 0; j < 9; j++){
            for(int k = 0; k < 9; k++){
                if(s[j][k]!='.'){
                    used++;
                    sudoku[j][k] = 0;
                    calc_lines(j,k,int(s[j][k]-'0'));
                    calc_squares(j,k,int(s[j][k]-'0'));
                }
            }
        }
        for(int j = 6; j < 9; j++){
            for(int k = 3; k < 6; k++){
                bitset<10> out = sudoku[j][k];
                cout << out << endl;
            }
        }
        while(used < 81){
            //search_row();
            //search_column();
            search_square();
            break;
        }
        for(int j = 0; j < 9; j++){
            cout << s[j] << endl;
        }
    }
    return 0;
}

