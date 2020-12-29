#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define N 1000001
using namespace std;
int main(){
    vector<bool> prime(N,true);
    prime[1] = false;
    for(int i=2;i<N;i++){
        if(prime[i]){
            for(int j=i+i;j<N;j+=i){
                prime[j]=false;
            }
        }
    }
    int T;
    cin>>T;
    while(T--){
        int L,U;
        cin>>L>>U;
        map<int,int> freq;
        int prev_prime{0};
        for(;L<=U;L++){
            if(prime[L]){
                if(prev_prime==0){
                    prev_prime=L;
                }else{
                    freq[L-prev_prime]++;
                    prev_prime = L;
                }
            }
        }int most_freq{0};
        int champion{0};
        bool oneTime=true;
        for(auto v : freq){
            //cout<<v.first<<' '<<v.second<<endl;
            if(v.second>most_freq){
                champion = v.first;
                most_freq = v.second;
                oneTime = true;
            }else if(v.second == most_freq){
                oneTime = false;
            }
        }if(oneTime&&champion){
            cout<<"The jumping champion is "<<champion<<endl;
        }else{
            cout<<"No jumping champion"<<endl;
        }
    }return 0;
}
