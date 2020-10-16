#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

map<int,char> direcciones = {{1,'N'},{2,'E'},{3,'S'},{4,'W'}};
map<char,int> direccionesIniciales = {{'N',1},{'E',2},{'S',3},{'W',4}};

struct posicion{
    int actualX;
    int actualY;
    int direccion;

    void rotationR(){
        direccion++;
        if(direccion>4) direccion=1;
    }

    void rotationL(){
        direccion--;
        if(direccion<1) direccion=4;
    }

    void moverse(){
        if(direccion==1) actualY++;
        if(direccion==2) actualX++;
        if(direccion==3) actualY--;
        if(direccion==4) actualX--;
    }

    void retroceder(){
        if(direccion==1) actualY--;
        if(direccion==2) actualX--;
        if(direccion==3) actualY++;
        if(direccion==4) actualX++;
    }
};

int main() {
    int ancho,alto,xo,yo,direccion,tamanio;
    char temp;
    string entradaIntrucciones;
    cin >> ancho >> alto;
    int plano[alto+3][ancho+3];
    memset(plano,-1,sizeof(plano));
    for(int i=1;i<alto+2;i++){
        for(int j=1;j<ancho+2;j++){
            plano[i][j]=0;
        }
    }
    vector<posicion> robots;
    vector<string> intrucciones;
    int a=3;
    while(a--){
        cin >> xo >> yo >> temp;
        direccion=direccionesIniciales[temp];
        robots.push_back(posicion{xo+1,yo+1,direccion});
        cin >> entradaIntrucciones;
        intrucciones.push_back(entradaIntrucciones);
    }
    tamanio=robots.size();
    bool LOST[tamanio]={};
    for(int i=0;i<robots.size();i++){
        for(int j=0;j<intrucciones[i].size();j++){
            temp=intrucciones[i][j];
            if(temp=='R') robots[i].rotationR();
            if(temp=='L') robots[i].rotationL();
            if(temp=='F') robots[i].moverse();
            if(plano[robots[i].actualY][robots[i].actualX]==-1){
                plano[robots[i].actualY][robots[i].actualX]=-2;
                robots[i].retroceder();
                LOST[i]=true;
                break;
            }
            if(plano[robots[i].actualY][robots[i].actualX]==-2){
                robots[i].retroceder();
            }
        }
    }
    int ctr=0;
    for(auto &x:robots){
        cout << (x.actualX)-1 << " " << (x.actualY)-1 << " " << direcciones[x.direccion];
        if(LOST[ctr]) cout << " LOST" << endl;
        else cout << endl;
        ctr++;
    }
    return 0;
}
