#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> data(N);
        bool ok = true;
        for(int i=0;i<N;i++){
            cin>>data[i];
        }
        vector<int> rainbow;
        for(int i = 1;i<=7;i++){
            rainbow.push_back(i);
        }int k{0};
        for(int i{0},j{N-1};i<=N/2;i++,j--){
            if(data[i]!=data[j]){
                ok = false;
                break;
            }if(data[i]==rainbow[k]){
                k++;
            }
        }if(ok&&k>=7) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }return 0;
}
