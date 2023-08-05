#include<iostream>
using namespace std;
int main(){
    int n,a[100],temp;
    cout<<"Enter the size of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=0;i<n-1;i++){//[9,7,5,2,3][2,7,5,9,3]
        int min = i;
        for(int j=i+1;j<n;j++){
           if(a[j]<a[min]){
                min = j;
           }
        }
        if(min!=i){
            temp = a[i];
            a[i]=a[min];
            a[min]=temp;

        }
    }
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
}