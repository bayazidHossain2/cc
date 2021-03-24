#include<iostream>
#include<math.h>
#define ratio double(2)/3
using namespace std;
int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    double AO,BO,CO;
    double AD,BE,CF;
    while(cin>>AD>>BE>>CF){
        AO = ratio*AD;
        BO = ratio*BE;
        CO = ratio*CF;
        bool not_possible=false;
        if(AO>BO){
            if(AO>CO){
                if(AO>=BO+CO){
                    not_possible = true;
                }
            }else{
                if(CO>=AO+BO){
                    not_possible = true;
                }
            }
        }else{
            if(BO>CO){
                if(BO>=AO+CO){
                    not_possible = true;
                }
            }else{
                if(CO>=AO+BO){
                    not_possible = true;
                }
            }
        }
        if(not_possible){
            printf("-1.000\n");
            continue;
        }
        double S,area;
        S = double(AO+BO+CO)/2;
        area = S*(S-AO)*(S-BO)*(S-CO);
        printf("%.3lf\n",3*sqrt(area));
    }return 0;
}
