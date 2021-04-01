#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int fun(int si,ll &N){
    ll fact{1};
    for(int i=1;i<si;i++){
        fact*=i;
    }
    int ind = N/fact;
    N%=fact;
    return ind;
}
int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    int T;
    cin>>T;
    int mem=T;
    while(T--){
        string str;
        cin>>str;
        //cout<<str<<endl;
        sort(str.begin(),str.end());
        //cout<<str<<endl;
        ll N;
        cin>>N;
        //cout<<T<<' '<<str<<' '<<N<<endl;
        vector<int> index,result;
        for(int i=0;i<str.size();i++){
            index.push_back(i);
        }while(index.size()){
            int ind=fun(index.size(),N);
            ind %= str.size();
            //cout<<" ind "<<ind<<endl;
            result.push_back(index[ind]);
            index.erase(index.begin()+ind);
        }
        for(auto v : result){
            cout<<str[v];
        }cout<<endl;
        //cout<<mem-T<<" "<<str<<endl;
    }return 0;
}
