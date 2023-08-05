#include<iostream>
using namespace std;
int sum(int n){
    int s = n*(n+1)/2;
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}