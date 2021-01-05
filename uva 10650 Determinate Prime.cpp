#include<iostream>
#include<vector>
#include<map>
#define N 32005
using namespace std;
int main(){
    vector<bool> prime(N,true);
    vector<int> primeList;
    for(int i=2;i<N;i++){
        if(prime[i]){
            primeList.push_back(i);
            for(int j=i+i;j<N;j+=i){
                prime[j]=false;
            }
        }
    }
    int x,y;
    while(cin>>x>>y&&(x||y)){
        if(x>y){
            int temp=x;
            x=y;
            y=temp;
        }
        vector<int> result;
        int dis{0};
        //cout<<x<<' '<<y<<endl;
        for(int i=0;i<primeList.size();i++){
            if(dis==(primeList[i+1]-primeList[i])){
                result.push_back(primeList[i]);
            }else{
                if(result.size()>1&&primeList[i]<=y&&result[0]>=x){
                    //cout<<"wrong "<<result[result.size()-1]<<' '<<y<<endl;
                    for(auto v : result){
                        cout<<v<<' ';
                    }cout<<primeList[i]<<endl;
                }
                dis = primeList[i+1]-primeList[i];
                result.erase(result.begin(),result.end());
                result.push_back(primeList[i]);
            }
        }
    }return 0;
}
