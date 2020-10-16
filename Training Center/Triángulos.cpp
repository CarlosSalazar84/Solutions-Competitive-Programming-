#include<bits/stdc++.h>
using namespace std;

int main(){
    double a[3];
    double altura,area;
    while(cin >> a[0] >> a[1] >> a[2]){
        sort(a,a+3);
        if(a[2]<a[0]+a[1]){
            if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2]){
                double s=(a[0]+a[1]+a[2])/2;
                altura=2/a[2]*sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
                area=(altura*a[2])/2;
            }
            else if(a[0]==a[1] && a[0]==a[2]){
                    altura=sqrt((a[0]*a[0])-((a[2]/2)*(a[2]/2)));
                    area=altura*a[2]/2;
            }else{
                if(a[0]==a[1]){
                    altura=sqrt((a[0]*a[0])-((a[2]/2)*(a[2]/2)));
                    area=altura*a[2]/2;
                }else if(a[0]==a[2]){
                    altura=sqrt((a[0]*a[0])-((a[1]/2)*(a[1]/2)));
                    area=altura*a[1]/2;
                }else{
                    altura=sqrt((a[1]*a[1])-((a[0]/2)*(a[0]/2)));
                    area=altura*a[0]/2;
                }
            }
            cout << fixed << setprecision(3) << area << endl;
        }else{
            cout << "IMPOSIBLE" << endl;
        }
    }
}
