#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> data(N);
        for(int i=0;i<N;i++) cin>>data[i];
        sort(data.begin(),data.end());
        int result{0};
        for(int i = N-1;i-2>=0;i-=3){
            result+=data[i-2];
        }cout<<result<<endl;
    }return 0;
}
