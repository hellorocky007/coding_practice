#include<iostream>
using namespace std;
 void Fibnocciis(int n){
    int a=1,b=1,temp=0,i,j;
    cout<<b<<",";
    for(i=1;i<=n-2;i++){
        temp = a+b;
        cout<<temp<<",";
        a = b;
        b=temp;
    }
 }
 int main(){
    int n;
    cout<<"Enter the number for fibboanci"<<endl;
    cin>>n;
    Fibnocciis(n);

 }