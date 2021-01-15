#include<iostream>
using namespace std;
bool cmpstr(string str,int p,int q){
    //cout<<"("<<p<<','<<q<<") ";
    if(q>=str.size()) return false;
    for(int i=0;i+p<q;i++){
        if(str[p+i]!=str[q+i]){
            return false;
        }
    }//cout<<1<<endl;
    return true;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cin.ignore();
        string str;
        cin>>str;
        for(int len=1;len<str.size();len++){
            int p=0,q=len;
            //cout<<len<<" : ";
            while(cmpstr(str,p,q)){
                p=q;
                q=p+len;
                //cout<<q<<endl;
                if(q == str.size()){
                    cout<<len<<endl;
                    goto endc;
                }
            }
        }cout<<str.size()<<endl;
        endc:
        cout<<endl;
        continue;
    }
}
