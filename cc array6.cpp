#include<iostream>
#include<vector>
using namespace std;
int surce(vector<string> dic,string str){
    for(int i=0;i<dic.size();i++){
        if(dic[i] == str) return i;
    }return -1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        vector<string> dic(N);
        vector<bool> use;
        for(int i=0;i<N;i++){
            cin>>dic[i];
            use.push_back(false);
        }
        while(K--){
            int L;
            cin>>L;
            string temp;
            for(int i=0;i<L;i++){
                cin>>temp;
                int ind = surce(dic,temp);
                if(ind != -1) use[ind] = true;
            }
        }
        for(auto v : use){
            if(v) cout<<"YES ";
            else cout<<"NO ";
        }cout<<endl;
    }return 0;
}
