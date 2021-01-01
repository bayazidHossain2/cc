#include<iostream>
#include<map>
using namespace std;
long long fact[21];

int main(){
    fact[0]=1;
    for(int i=1;i<21;i++){
        fact[i]=fact[i-1]*i;
    }
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        string str;
        cin>>str;
        map<char,int> his;
        int total{0};
        for(auto ch:str){
            total++;
            his[ch]++;
        }long long div{1};
        for(auto v:his){
            //cout<<v.second<<' ';
            if(v.second>1){
                div *= fact[v.second];
                //cout<<fact[v.second]<<endl;
            }
        }//cout<<fact[total]<<endl;
        //cout<<div<<endl;
        cout<<"Data set "<<i<<": "<<fact[total]/div<<endl;
    }return 0;
}