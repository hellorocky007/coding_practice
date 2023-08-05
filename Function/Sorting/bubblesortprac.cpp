#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp,a[10];//n->size
    cout<<"Enter the size of arrary"<<endl;
    cin>>n;
    cout<<"Enter element of array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    // bubble sort algorithm
    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            if(a[j]<a[j+1]){// 12  23
                temp=a[j+1];//temp=23
                a[j+1]=a[j];//a[j+1]=12
                a[j]=temp;//a[j]=23
            }
            
        }
    } 
// diplaying element
cout<<"The sorted element are "<<endl;
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}