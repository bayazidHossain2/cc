#include<iostream>
#include<vector>
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
    int even;
    while(cin>>even&&even!=0){
        int small_ind=0,big_ind=even-1;
        bool is_ok=true;
        while(1){
            if(prime[small_ind]&&prime[big_ind]){
                if(small_ind+big_ind==even) break;
                else if(small_ind+big_ind>even) big_ind--;
                else if(small_ind+big_ind<even) small_ind++;
                continue;
            }
            if(!prime[small_ind]) small_ind++;
            if(!prime[big_ind]) big_ind--;
            if(big_ind < small_ind){
                is_ok = false;
                break;
            }
        }if(is_ok){
            cout<<even<<" = "<<small_ind<<" + "<<big_ind<<endl;
        }else cout<<"‘Goldbach's conjecture is wrong."<<endl;
    }return 0;
}
