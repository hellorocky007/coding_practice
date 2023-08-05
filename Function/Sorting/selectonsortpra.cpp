#include<iostream>
using namespace std;
int main(){
    int i,j,n,min,temp,a[10];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                j=min;
            }
        }
        if(i!=min){
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        }
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}