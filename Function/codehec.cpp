/*#include<iostream>
using namespace std;
int  BinarytoDecimal(int n){
int x,num=0,rem,pow=1;
while(n>0){
    rem = n%10;
    num = num + rem*pow;
    pow*=8;
    n = n/10;
}
return num;
}
int main(){
    int n;
    cin>>n;
    cout<<BinarytoDecimal(n)<<endl;
}*/
#include<iostream>
using namespace std;
int deciTobinary(int n){
    int lastdigit,ans=0;
    int x=1;
    while(x<=n)
        x=x*2;
        x = x/2;
        while(x>0){
            lastdigit = n/x ;
            n = n-lastdigit*x;
            x=x/2;
            ans = ans*10 + lastdigit;
        }
        return ans;
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<deciTobinary(n)<<endl;
}