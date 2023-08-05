#include<iostream>
using namespace std;
int binarytodeci(int n){
    int result = 0;
    int x=1;
    while(n>0){
           int y = n%10;
           result += x*y;
           x *=2;
           n /=10;
    }
    return result;
}
int binarytooctal(int n){
     int result = 0;
    int x=1;
    while(n>0){
           int y = n%10;
           result += x*y;
           x *=8;
           n /=10;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<"Binary to decimal="<<binarytodeci(n)<<endl;
    cout<<"octal to decimal = "<<binarytooctal(n)<<endl;
} 