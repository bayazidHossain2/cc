#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<long long> qs(100001);
    qs[0]=0,qs[1]=1;
    for(int i=2;i<100001;i++){
        qs[i] += (i+qs[i-1]);
    }
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int num_1{0};
        char ch;
        while(N--){
            cin>>ch;
            if(ch=='1') num_1++;
        }cout<<qs[num_1]<<endl;
    }return 0;
}
