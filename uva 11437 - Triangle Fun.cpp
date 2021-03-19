#include<iostream>
using namespace std;
int round(double d){
    int in = d;
    if(d-in>0.5) return in+1;
    else return in;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        double Ax,Ay,Bx,By,Cx,Cy;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        double Dx,Dy,Ex,Ey,Fx,Fy;
        Dx = (Cx+2*Bx)/3.0 , Dy = (Cy+2*By)/3.0;
        Ex = (Ax+2*Cx)/3.0 , Ey = (Ay+2*Cy)/3.0;
        Fx = (Bx+2*Ax)/3.0 , Fy = (By+2*Ay)/3.0;
        double a1,a2,a3,b1,b2,b3,c1,c2,c3;
        a1 = Ay-Dy , b1 = Dx-Ax , c1 = Ax*Dy-Ay*Dx;
        a2 = By-Ey , b2 = Ex-Bx , c2 = Bx*Ey-By*Ex;
        a3 = Cy-Fy , b3 = Fx-Cx , c3 = Cx*Fy-Cy*Fx;
        double Px,Py,Qx,Qy,Rx,Ry;
        Px = double(b1*c2-b2*c1)/(a1*b2-a2*b1) , Py = double(c1*a2-c2*a1)/(a1*b2-a2*b1);
        Qx = double(b2*c3-b3*c2)/(a2*b3-a3*b2) , Qy = double(c2*a3-c3*a2)/(a2*b3-a3*b2);
        Rx = double(b3*c1-b1*c3)/(a3*b1-a1*b3) , Ry = double(c3*a1-c1*a3)/(a3*b1-a1*b3);
        double area = Px*(Qy-Ry)+Qx*(Ry-Py)+Rx*(Py-Qy);
        int result = round(area/2);
        cout<<result<<endl;
    }return 0;
}
