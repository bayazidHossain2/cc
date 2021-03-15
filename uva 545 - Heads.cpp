#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //round(456789);
    int r;
    cin>>r;
    while(r--){
        int n;
        int digits=1,exp{0};
        cin>>n;
        double result=1;
        for(int i=0;i<n;i++){
            result /= 2;
            while(result < 1){
                exp++;
                result *= 10;
            }
        }
        int in = result*10000;
        if(in%10>=5){
            in/=10;
            in++;
            result = in/1000.0;
        }
        printf("2^-%d = %.3lfE-%d\n",n,result,exp);

    }return 0;
}
