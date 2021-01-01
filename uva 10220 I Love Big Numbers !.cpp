#include<iostream>
#include<string.h>
using namespace std;
class fact{
    int num;
    char s[10000];
public:
    fact(){
        num=0;
    }
    fact(int num){
        this->num=num;
        facto();
    }
    void set(int num){
        this->num=num;
        facto();
    }
    void facto(){
        int n=num;
        num_str(n--);
        while(n>1){
            mul_with_string(n--);
        }
        revers();
    }
    void mul_with_string(int n){
        int carry=0,i;
        for(i=0;s[i]!='\0';i++){
            int d=s[i]-48,mul=(n*d)+carry;
            s[i]=(mul%10)+48;
            mul/=10;
            carry=mul;
        }while(carry){
            s[i++]=(carry%10)+48;
            carry/=10;
        }
        s[i]='\0';
    }
    void num_str(int num){
        int i=0;
        if(num==0){
            s[0]='1';
            s[1]='\0';
        }
        while(num>0){
            s[i]=(num%10)+48;
            num/=10;
            s[i+1]='\0';
            i++;
        }
    }
    string get_fact(){
        return s;
    }void revers(){
        int len;
        char ch;
        for(len=0;s[len]!='\0';len++);
        len--;
        for(int i=0;i<len;i++,len--){
            ch=s[i];
            s[i]=s[len];
            s[len]=ch;
        }
    }
};
int main()
{
    fact a;
    int number;
    while(cin>>number){
        a.set(number);
        string digits=a.get_fact();
        int sum{0};
        for(auto digit : digits){
            sum += (digit-'0');
        }
        cout<<sum<<endl;
    }
    return 0;
}