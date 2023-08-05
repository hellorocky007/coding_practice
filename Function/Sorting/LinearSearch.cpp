#include<iostream>
using namespace std;  
int main()
{
    int a[20],i,x,n;
    cout<<"How many elements?"<<endl;
    cin>>n;    
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<n;++i)
      cin>>a[i];
    cout<<"Enter element to search:"<<endl;
    cin>>x;
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        cout<<"Element found at index "<<i<<endl;
    else
        cout<<"Element not found"<<endl;
  
    return 0;
}
