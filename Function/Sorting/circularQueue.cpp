#include<iostream>
using namespace std;
#define size  5
int front=-1,rear = -1;
int queue[size];
void enqueue(){
    int element;
    cout<<"Enter the elements"<<endl;
    cin>>element;
    if(front==-1 && rear == -1){
        front=rear=0;
        queue[rear]=element;
    }else if(front==size-1){
        cout<<"Queue is overflow"<<endl;
    }else{
        rear++;
        queue[rear]=element;
    }

}
int dequeue()  
{  
    if((front==-1) && (rear==-1))    
    {  
        cout<<"Queue is in underflow"<<endl;
    }  
 else if(front==rear)  
{  
  cout<<"The dequeued element is "<<queue[front]<<endl;
   front=-1;  
   rear=-1;  
}   
else  
{  
  cout<<"The dequeued element is "<<queue[front]<<endl;
   front++;  
}  
}  
void display()  
{   
    if(front==-1 && rear==-1)  
    {  
          cout<<"Queue is empty"<<endl;
    }  
    else  
    {  
        cout<<"The elements of Queue is "<<endl;
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<",";
        }
        cout<<endl;
    }  
}  
int main(){
    int choice;
    cout<<"Enter your choice"<<endl;
    while(choice){
        cout<<"Enter your choice"<<endl;
        cout<<"1.Enter to insert the element"<<endl;
        cout<<"2.Enter to delete the element"<<endl;
        cout<<"3.Enter to display the element"<<endl;
        cout<<"4.Enter to exit from queue "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        break;
        default:cout<<"Enter the valid choice"<<endl;
        break;
        }


    }
}