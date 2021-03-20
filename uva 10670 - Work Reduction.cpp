#include<iostream>
#include<vector>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    for(int ca = 1;ca<=T;ca++){
        int N,M,L;
        cin>>N>>M>>L;
        vector<string> name;
        vector<pair<int,int>> data;
        string inp;
        for(int i=0;i<L;i++){
            cin>>inp;
            int p=0;
            string tname;
            while(inp[p]!=':'){
                tname += inp[p++];
            }name.push_back(tname);
            p++;
            string A,B;
            while(inp[p]!=','){
                A+=inp[p++];
            }p++;
            while(p<inp.size()){
                B+=inp[p++];
            }
            data.push_back(make_pair(stoi(A),stoi(B)));
        }
        vector<int> result;
        int d{0},p{0},tn=N;
        for(auto v : data){
            while(1){
                if(tn/2>=M&&(tn-int(tn/2))*v.first>v.second){
                    tn/=2;
                    d++;
                }else{
                    p+=(tn-M);
                    tn=M;
                }
                if(tn==M) break;
                //cout<<N<<' '<<d<<' '<<p<<endl;
            }
            result.push_back(p*v.first+d*v.second);
            tn=N;
            d=p=0;
        }cout<<"Case "<<ca<<endl;
        while(1){
            if(result.size()==0) break;
            int mini{0};
            for(int j=1;j<result.size();j++){
                if(result[j]<result[mini]){
                    mini = j;
                }else if(result[j]==result[mini]){
                    if(name[j]<name[mini]){
                        mini = j;
                    }
                }
            }cout<<name[mini]<<' '<<result[mini]<<endl;
            result.erase(result.begin()+mini);
            name.erase(name.begin()+mini);
        }
    }return 0;
}
