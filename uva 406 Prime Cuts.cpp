#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<bool> prime(1001,true);
    vector<int> prime_list;
    prime_list.push_back(1);
    for(int i=2;i<1001;i++){
        if(prime[i]){
            prime_list.push_back(i);
            for(int j=i+i;j<1001;j+=i){
                prime[j]=false;
            }
        }
    }int N,C;
    while(cin>>N>>C){
        int num{0};
        for(int i=0;prime_list[i]<=N;i++){
            num++;
            if(i+1==prime_list.size()) break;
        }int center = num/2;
        cout<<N<<' '<<C<<':';
        if(num&1){
            for(int i = ((center-C+1)>0)?(center-C+1):0;i<center+C&&i<num;i++){
                cout<<' '<<prime_list[i];
            }
        }else{
            for(int i = ((center-C)>0)?(center-C):0;i<center+C&&i<num;i++){
                cout<<' '<<prime_list[i];
            }
        }cout<<endl<<endl;
    }return 0;
}
