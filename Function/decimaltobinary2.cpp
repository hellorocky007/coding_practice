#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int store[10];
    for( i=0;n>0;i++){
        store[i]=n%2;
        n = n/2;
    }
    for(j=i-1;j>=0;j--){
        cout<<store[j];
    }
}