#include<iostream>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    int N,T;
    for(int tt=1;true;tt++){
        cin>>N>>T;
        if(N==0||T==0) break;
        vector<string> names;
        map<string,int> data;
        string name;
        for(int i=0;i<N;i++){
            cin>>name;
            names.push_back(name);
            data[name] = 0;
        }
        string from,to;
        int mony;
        for(int i=0;i<T;i++){
            cin>>to>>from>>mony;
            data[to] += mony;
            data[from] -= mony;
        }
        cout<<"Case #"<<tt<<endl;
        for(int i=0;i<names.size();i++){
            int gi=-1;
            if(data[names[i]]<0){
                for(int j=0;j<names.size();j++){
                    if(data[names[j]]>0){
                        gi=j;
                        break;
                    }
                }
                int trans = (data[names[gi]]<-1*data[names[i]])?data[names[gi]]:-1*data[names[i]];
                //cout<<data[names[i]]<<' '<<data[names[gi]]<<endl;
                data[names[i]] += trans;
                data[names[gi]] -= trans;
                cout<<names[i]<<' '<<names[gi]<<' '<<trans<<endl;
                i--;
            }

        }cout<<endl;
    }return 0;
}
