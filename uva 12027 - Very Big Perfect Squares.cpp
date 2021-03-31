#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    string str;
    while(cin>>str){
        if(str=="0") break;
        double num{0};
        if(1&str.size()){
            cout<<int(sqrt(str[0]-'0'));;
        }else{
            cout<<int(sqrt((10*(str[0]-'0'))+str[1]-'0'));
        }
        for(int i=1;2*i<str.size();i++){
            cout<<0;
            //num = (num*10)+(str[i]-'0');
        }//cout<<num<<endl;
        //cout<<"sqrt : "<<sqrt(num)<<endl;
        cout<<endl;
    }
}
