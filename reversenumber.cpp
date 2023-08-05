#include<iostream>
using namespace std;
int main(){
    int n,rem;
    cin>>n;
    while(n){
        rem = n%10;
        cout<<rem;
        n=n/10;
    }
}