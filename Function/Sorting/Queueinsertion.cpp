#include<iostream>
using namespace std;
#define N 5
void enqueue();
void dequeue();
void display();
void peek();
int queue[N];
int front = -1,rear = -1;           
void enqueue()  
 {    
    int x;
    cout<<"Enter the elements"<<endl;
      cin>>x;
    if(rear==N-1){
        cout<<"Queue is full"<<endl;
    }else if(front==-1 && rear ==-1){
        front = rear = 0;
        queue[rear] = x;
    }else{
        rear++;
        queue[rear] = x;
    }
 }
 void dequeue() 
 {
    if(front==-1 && rear==-1){
        cout<<"Queue is empty"<<endl;
    }else if(front==rear){
        front = rear = -1;
    }
    else{
            front++;
    }
 }
 void display(){
    if(front==-1&& rear ==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i = front;i<rear+1;i++){
         cout<<queue[i]<<",";
        }
        cout<<endl;
    }
 }
 void peek(){
    if(front==-1&& rear==-1){
        cout<<"Queue is underflow"<<endl;
    }else{
        cout<<queue[rear]<<endl;
    }
 }
 void isFull(){
    if(rear==N-1){
        cout<<"Queue is overflow condition";
    }else{
        cout<<"Queue is not full"<<endl;
    }

 }
 void isEmpty(){
    if(front==-1 && rear==-1){
        cout<<"Queue is in underflow condition";
    }else{
        cout<<"Queue is not empty"<<endl;
    }
 }
 int main(){
    int choice;
    while(choice){
        cout<<"MENU\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peak\n5.IsFull\n6.IsEmpty\n7.Exit\n"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: enqueue();
        break;
        case 2: dequeue();
        break;
        case 3: display();
        break;
        case 4: peek();
        break;
        case 5:isFull();
        break;
        case 6:isEmpty();
        break;
        case 7:exit(0);
        break;   
        default: cout<<"Invalid choice\n"<<endl;
        break;
        }
    }
    return 0;
 }
    