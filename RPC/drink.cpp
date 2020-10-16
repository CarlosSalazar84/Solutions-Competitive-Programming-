#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<bool,bool> pbb;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

const long double ep = 1e-6;
int main(){
    fastIO;
    cout << fixed << setprecision(7);
    long double lin1[4], lin2[4], m1, m2;
    long double corte, altura, x1, x2, b1, b2;
    long double ancho, rta = 0;
    cin >> lin1[0] >> lin1[1] >> lin1[2] >> lin1[3];
    cin >> lin2[0] >> lin2[1] >> lin2[2] >> lin2[3];

    m1 = (lin1[3] - lin1[1])/(lin1[2] - lin1[0]);
    m2 = (lin2[3] - lin2[1])/(lin2[2] - lin2[0]);

    corte = (-1*lin2[1]/m2) + (lin1[1]/m1) + lin2[0] - lin1[0];
    corte /= ((1/m1) - (1/m2));
    altura = min(lin1[3], lin2[3]);
    if(corte + ep > lin1[1] && corte < lin1[3] + ep && corte + ep > lin2[1] && corte < lin2[3] + ep){
        b1 = lin1[1]-(m1*lin1[0]);
        b2 = lin2[1]-(m2*lin2[0]);

        x1 = (altura - b1)/m1;
        x2 = (altura - b2)/m2;
        ancho = abs(x1-x2);

        rta = (ancho * (altura - corte))/2;
    }
    cout << rta << endl;
    return 0;
}
