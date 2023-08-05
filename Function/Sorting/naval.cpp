#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements in an array: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the element of an array"<<endl;
    for (int i=0;i<n;i++)
        {
        cin>>arr[i];
        }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Array after selection sorting :";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}