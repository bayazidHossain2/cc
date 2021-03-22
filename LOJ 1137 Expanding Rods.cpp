#include<iostream>
#include<cstdio>
#include<math.h>
#define pi acos(-1)
using namespace std;
const double rad = pi/180;
double calculate(double thita,double length){
    return (length*(thita*rad))/sin(thita*rad);
}
int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    int T;
    cin>>T;
    for(int ca=1;ca<=T;ca++){
        double L,n,C;
        cin>>L>>n>>C;
        double Lp=(1+n*C)*L;
        L/=2;
        Lp/=2;
        double low=0,high=90,mid,aLp;
        int time=100;
        while(time--){
            mid=(high+low)/2;
            aLp = calculate(mid,L);
            /*if(fabs(aLp-Lp)<=0.00001){
                cout<<"Got : "<<mid<<' '<<L*tan((mid/2)*rad);
                printf(" %lf\n",L*tan((mid/2)*rad));
            }*/if(Lp-aLp<0.0){
                high = mid;
            }else{
                low = mid;
            }
        }printf("Case %d: %.10lf\n",ca,L*tan((mid/2)*rad));
    }return 0;
}
