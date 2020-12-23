#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,C;
        cin>>N>>C;
        int total{0},inp;
        for(int i = 0;i < N;i++){
            cin>>inp;
            total += inp;
        }if(total <= C) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }return 0;
}
