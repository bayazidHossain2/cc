#include<iostream>
#include<vector>
#define N 20000001
using namespace std;
int main(){
    vector<bool> prime(N,true);
    vector<pair<int,int>> twinPrime;
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<N;i++){
        if(prime[i]){
            if(prime[i-2]){
                twinPrime.push_back(make_pair(i-2,i));
            }
            for(int j=i+i;j<N;j+=i){
                prime[j]=false;
            }
        }
    }int num;
    while(cin>>num&&num!=0){
        if(num>twinPrime.size()){
            cout<<0<<endl;
        }else{
            cout<<'('<<twinPrime[num-1].first<<", "<<twinPrime[num-1].second<<')'<<endl;
        }
    }return 0;
}
