#include<iostream>
#include<vector>
#define N 10001
using namespace std;
int main(){
    vector<bool> prime(N,true);
    vector<int> p_list;
    prime[1] = false;
    for(int i=2;i<N;i++){
        if(prime[i]){
            p_list.push_back(i);
            for(int j=i+i;j<N;j+=i){
                prime[j]=false;
            }
        }
    }
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(auto v : p_list){
            if(v<=n&&v*2>n){
                cout<<v<<endl;
                break;
            }
        }
    }return 0;
}
