#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y,K,N;
        cin>>X>>Y>>K>>N;
        bool lucky = false;
        int P,C;
        for(int i = 0;i < N;i++){
            cin>>P>>C;
            if(P >= (X - Y) && C <= K) lucky = true;
        }if(lucky) cout<<"LuckyChef"<<endl;
        else cout<<"UnluckyChef"<<endl;
    }return 0;
}
