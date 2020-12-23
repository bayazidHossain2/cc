#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int ch,wv{0};
        while(N--){
            cin>>ch;
            if((ch+K)%7==0) wv++;
        }cout<<wv<<endl;
    }return 0;
}
