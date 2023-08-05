#include <bits/stdc++.h>
using namespace std;
int hexadecimaltobinary(string n){
    int result =0;
    int x=1;
    int s =n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            result +=x*(n[i]-'0');
        }else if(n[i]>= 'A' && n[i] <='F'){
            result +=x*(n[i]-'A'+10);
        }
        x*=16;

    }
    return result;
    
}

int main(){
    string n;
    cin>>n;
    cout<<hexadecimaltobinary(n)<<endl;
}