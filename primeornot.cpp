#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>=2){
        cout<<"Given number is not a prime number"<<endl;
    }else{
        cout<<"Given number is  a prime number"<<endl;
    }
    
}