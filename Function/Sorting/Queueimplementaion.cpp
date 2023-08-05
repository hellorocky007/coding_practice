#include<iostream>
using namespace std ;
# define N 5
int stack[N];
int top = -1;
int x;
void push(){
     cout<<"Enter the elements"<<endl;
     cin>>x;
    if(top==N-1){
        cout<<"Stach is overflow"<<endl;
    }else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    }else{
        item = stack[top];
        top--;
        cout<<item<<endl;
    }
}
void peek(){
    if(top==-1){
       cout<<"Stack is empty"<<endl;
    }else{
        cout<<stack[top]<<endl;
    }
}
void display(){
    cout<<"The elements of stack is "<<endl;
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
void isFull(){
    if(top==N-1){
      cout<<"Stack is overflow"<<endl;
    }else{
        cout<<"Stack is not overflow"<<endl;
    }
}
void isEmpty(){
    if(top==-1){
        cout<<"Stack is underflow"<<endl;
    }else{
        cout<<"Stack is not underflow"<<endl;
    }
}
int main(){
    int choice;
    while(choice){
        cout<<"MENU\n1.Push\n2.Display\n3.Pop\n4.Peek\n5.Isfull\n6.IsEmpty\n7.Exit\n"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:push();
            break;
            case 2:display();
            break;
            case 3:pop();
            break;
            case 4:peek();
            break;
            case 5:isFull();
            break;
            case 6: isEmpty();
            break;
            case 7: exit(0);
            break;
        default:cout<<"Invalid choice"<<endl;
            break;
        }
    }
}