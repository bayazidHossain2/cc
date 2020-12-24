#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int M,x,y;
        cin>>M>>x>>y;
        vector<int> data(M);
        for(int i=0;i<M;i++){
            cin>>data[i];
        }sort(data.begin(),data.end());
        int safe{0},last_unsafe{0};
        int remember=x*y;
        for(auto v : data){
            if(v-remember-1>last_unsafe) safe+=(v-remember-1-last_unsafe);
            last_unsafe = v+remember;
        }if(last_unsafe < 100) safe += 100-last_unsafe;
        cout<<safe<<endl;
    }return 0;
}
