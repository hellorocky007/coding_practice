#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f = f*i;
    }
    return f;
}
int main(){
    int n,r;
   cin>>n>>r;
   int sol = fact(n)/(fact(n-r)*fact(r));
   cout<<sol<<endl;
}