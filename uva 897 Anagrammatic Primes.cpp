#include<iostream>
#include<vector>
#include<algorithm>
#define N 10000001
using namespace std;
vector<int> to_digit(int num){
    vector<int> digits;
    while(num>0){
        digits.push_back(num%10);
        num /= 10;
    }
    return digits;
}
int to_number(int arr[],int size){
    int num{0};
    for(int i=0;i<size;i++){
        num=((num*10)+arr[i]);
    }return num;
}
int main(){
    vector<bool> prime(N,true);
    prime[1] = false;
    for(int i=2;i<N;i++){
        if(prime[i]){
            for(int j=i+i;j<N;j+=i){
                prime[j]=false;
            }
        }
    }
    int NN;
    while(cin>>NN&&NN){
        if(NN>=991){
            zero:
            cout<<0<<endl;
            continue;
        }int num=NN;
        int prev_size{0};
        start:
        vector<int> digits = to_digit(num);
        bool all9=true;
        for(int v : digits){
            if(v != 9){
                all9=false;
                break;
            }
        }if(all9) goto zero;
        sort(digits.begin(),digits.end());
        if(prev_size == 0||prev_size == digits.size()){
            prev_size = digits.size();
        }else goto zero;

        int arr[digits.size()];
        for(int i=0;i<digits.size();i++){
            arr[i] = digits[i];
        }bool is_ok=true;
        do{
            int prmut = to_number(arr,digits.size());
            if(!prime[prmut]){
                is_ok = false;
                break;
            }
        }while(next_permutation(arr,arr+digits.size()));
        if(is_ok&&num!=NN) cout<<num<<endl;
        else{
            num++;
            goto start;
        }
    }return 0;
}
