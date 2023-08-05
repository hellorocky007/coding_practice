#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left,*right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
    struct node *insertBST(struct node*root,int value){
        if(root==NULL){
            return new node(value);
        }
        if(value<root->data){
            root->left = insertBST(root->left,value);
        }else if(value >root->data){
            root->right =insertBST(root->right,value);
        }else{
            return root;
        }

    }
    void inorder(struct node*root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    int main(){
        int choice;
        int n;
        int data;
        struct node*root;
        while(choice){
            cout<<"MENU\n1.Insertthetree\n2.Inorder\n3.Exit\n";
            cin>>choice;
            switch (choice)
            {
            case 1:
            cout<<"Enter the number elements\n";
            cin>>n;
            cout<<"Enter the element\n";
            for(int i=0;i<n;i++){
                cin>>data;
                root = insertBST(root,data);
            }
                break;
            case 2: inorder(root);
            break;
            case 3: exit(0);
            break;
            default:cout<<"Invalid choice";
            break;
                break;
            }

            
        }
        
    }
