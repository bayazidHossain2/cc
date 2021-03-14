#include<iostream>
#include<set>
using namespace std;
bool all_posible_sub(string root,string sub){
    if(root.size()%sub.size()==0){
        for(int i=0,j=0;i<root.size();i++,j++){
            if(j==sub.size()){
                j=0;
            }
            if(root[i]!=sub[j]) return false;
        }return true;
    }else return false;
}
set<int> divisors(int num){
    set<int> div;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            div.insert(i);
            div.insert(num/i);
        }
    }
    return div;
}
int main(){
    string str;
    while(cin>>str){
        if(str == ".") break;
        string sub;
        set<int> div = divisors(str.size());
        for(auto i : div){
            for(int j=sub.size();j<i;j++) sub+=str[j];
            if(all_posible_sub(str,sub)){
                cout<<str.size()/sub.size()<<endl;
                break;
            }
        }
    }return 0;
}
