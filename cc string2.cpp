#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        int length = str.size();
        vector<char> data1;
        vector<char> data2;
        for(int i=0;i<length/2;i++){
            data1.push_back(str[i]);
            data2.push_back(str[length-i-1]);
        }sort(data1.begin(),data1.end());
        sort(data2.begin(),data2.end());
        if(data1==data2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }return 0;
}
