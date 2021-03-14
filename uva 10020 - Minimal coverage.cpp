#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        map<int,int> data;
        int l,r;
        int M;
        cin>>M;
        while(cin>>l>>r){
            if(l==0&&r==0) break;
            if(data[l]<r) data[l] = r;
        }
        int p{0};
        map<int,int> result;
        int ll{0},rr=-1;
        for(auto v : data){
            runagain:
            if(v.first<=p&&v.second>rr){
                ll=v.first;
                rr=v.second;
            }
            if(v.first>=p){
                if(p!=rr){
                    p=rr;
                    result[ll]=p;
                    if(p>=M) break;
                    goto runagain;
                }else{
                    result.clear();
                    break;
                }
            }
        }
        if(p!=rr){
            p=rr;
            result[ll]=p;
        }
        if(p<M) result.clear();
        cout<<result.size()<<endl;
        for(auto v : result){
            cout<<v.first<<' '<<v.second<<endl;
        }
        if(T!=0) cout<<endl;
    }return 0;
}
