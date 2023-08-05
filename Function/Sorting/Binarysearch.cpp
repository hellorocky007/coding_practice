#include<iostream>
using namespace std;
 int main()
{
    int arr[50],i,n,x,flag=0,first,last,mid;
 
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"\nEnter array element(ascending order)\n"<<endl;
 
    for(i=0;i<n;++i)
        cin>>arr[i];
 
    cout<<"Enter the element to search:"<<endl;
    cin>>x;
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
 
        if(x==arr[mid]){
            flag=1;
            break;
        }
        else
            if(x>arr[mid])
                first=mid+1;
            else
                last=mid-1;
    } 
    if(flag==1)
     cout<<"Element found at position "<<mid+1<<endl;
    else
        cout<<"Element not found"<<endl;
 
    return 0; }
