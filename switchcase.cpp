#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
    cout<<"Enter the operatar"<<endl;
    char op;

    cin>>op;
    switch (op)
    {
    case '+': cout<<a+b<<endl;
        break;
    case '-': cout<<a-b<<endl;
    break;
    case '*': cout<<a*b<<endl;
    break;
    case '/':cout<<a/b<<endl;
    break;
    case '%':cout<<a%b<<endl;
    break;
    default:cout<<"Invalid choice"<<endl;
        break;
    }

}
