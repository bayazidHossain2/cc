#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    //freopen("001input.txt","r",stdin),freopen("001output.txt","w",stdout);
    vector<int> prev,current;
    vector<vector<int>> tree;
    prev.push_back(1);
    tree.push_back(prev);
    for(int depth =1;depth<20;depth++){
        int increse = pow(2,depth-1);
        for(int k=0;k<prev.size();k++){
            current.push_back(prev[k]);
            current.push_back(prev[k]+increse);
        }prev=current;
        tree.push_back(current);
        current.clear();
    }
    int T;
    while(cin>>T&&T!=-1){
        for(int test_case=1;test_case<=T;test_case++){
            int I,D;
            cin>>D>>I;
            vector<int> leap=tree[D-1];
            int i=0;
            for(;i<leap.size();i++){
                if(leap[i]==I){
                    break;
                }
            }cout<<int(pow(2,D-1))+i<<endl;
        }
    }return 0;
}
