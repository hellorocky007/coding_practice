#include<iostream>
using namespace std;
int main(){
    int a[100],n,temp,j;
   cout<<"Enter the size of list"<<endl;
   cin>>n;
   cout<<"Enter the elements"<<endl;
   for(int i=0;i<n;i++){
    cin>>a[i];
}
   for(int i=1;i<n;i++){
       temp = a[i];
       j = i-1;
       while(j>=0 && a[j]>temp){
          a[j+1]=a[j];
          j--;
       }
       a[j+1]=temp;
   }    
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}