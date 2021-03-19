#include<iostream>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s,t;
    while(cin>>s>>t){
        int p=0;
        int match{0};
        for(auto v : s){
            for(;p<t.size();p++){
                //cout<<v<<' '<<t[p];
                if(v==t[p]){
                    p++;
                    match++;
                    //cout<<" match "<<match;
                    break;
                }//cout<<endl;
            }
        }if(s.size()==match) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }return 0;
}
