#include<iostream>
using namespace std;
int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    int T;
    cin>>T;
    while(T--){
        int ix1,iy1,ix2,iy2,fx1,fy1,fx2,fy2;
        cin>>ix1>>iy1>>fx1>>fy1;
        cin>>ix2>>iy2>>fx2>>fy2;
        if(fx1<=ix2||fy1<=iy2||ix1>=fx2||iy1>=fy2){
            cout<<"No Overlap"<<endl;
        }else{
            cout<<((ix1>ix2)?ix1:ix2)<<' ';
            cout<<((iy1>iy2)?iy1:iy2)<<' ';
            cout<<((fx1<fx2)?fx1:fx2)<<' ';
            cout<<((fy1<fy2)?fy1:fy2)<<endl;
        }if(T!=0){
            cout<<endl;
        }
    }return 0;
}
