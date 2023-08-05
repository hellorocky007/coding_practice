#include<iostream>
using namespace std;
 void fib(int n){
    int t1=1,t2=1,temp;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        temp = t1+t2;
        t1 = t2;
        t2 = temp;
    }
    return;
 }
 int main(){
    int n;
    cin>>n;
    fib(n);
 }