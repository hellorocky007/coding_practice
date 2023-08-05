#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,rem,num=0;
    cin>>n;
    int origanal=n;
    while(n>0){
        rem = n%10;
        num +=pow(rem,3);
        n=n/10;
    }
    cout<<num<<endl;
    if(origanal==num){
        cout<<"Given number is armstrong number"<<endl;
    }else{
        cout<<"Given number is not armstrong number"<<endl;
    }
}