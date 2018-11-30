#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};
node *head=new node();
void insert(struct node *temp,int n){
        temp=new node();
        cin>>head->data;
        head->prev=NULL;
        temp=head;
    for(int i=0;i<n-1;i++){
        node *nn=new node();
        cin>>nn->data;
        nn->next=NULL;
        nn->prev=temp;
        temp->next=nn;
        temp=nn;
        }
}
int insert_element(int n,int ele,int pos){
    node *x;
    x=head;
    node *newnode=new node();
    newnode->data=ele;
    if(pos==1){
        newnode->prev=NULL;
        newnode->next=x;
        x->prev=newnode;
        head=newnode;
    }
    else if(pos==n+1){
            while(x->next!=NULL){
                x=x->next;
            }
                x->next=newnode;
                newnode->next=NULL;
                newnode->prev=x;
            }
    else{
    for(int i=1;i<=n;i++){

        if(i==pos){
            x->prev->next=newnode;
            newnode->prev=x->prev;
            newnode->next=x;
        }
        x=x->next;
    }
    }
    return n+1;
}

int delete_element(int n,int ele){
    node *x;
    x=head;
    for(int i=1;i<=n;i++){
        if(x->data==ele){
            if(i==1){
                head=head->next;
                head->prev=NULL;

            }
            else if(i==n){

                x->prev->next=NULL;
            }
            else {
                x->prev->next=x->next;
                x->next->prev=x->prev;
            }
        }
        x=x->next;
    }
    return n-1;

}
void search_element(int ele){
int i=1,u=0;
node *x=head;
while(x!=NULL){
    if(x->data==ele){
            u=1;
        cout<<"Position of "<<ele<<" is "<<i<<endl;
    }
    x=x->next;
    i++;
}
if(u==0)
    cout<<"Not found"<<endl;
}
void display(){
    node *x=head;
    while(x!=NULL){
            cout<<x->data<<" ";
        x=x->next;
    }
    cout<<endl;

}
int main(){
    node *temp;
    int n,choice,pos,ele;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    cout<<"enter data"<<endl;
    insert(temp,n);
    cout<<"enter 1 to insert"<<endl;
    cout<<"enter 2 to delete"<<endl;
    cout<<"enter 3 to search"<<endl;
    cout<<"enter 4 to display"<<endl;
    cin>>choice;
    while(choice){
        switch(choice){
        case 1:
            cout<<"Enter the position"<<endl;
            cin>>pos;
            cout<<"Enter the element"<<endl;
            cin>>ele;
            n=insert_element(n,ele,pos);
            break;
        case 2:
            cout<<"Enter the element"<<endl;
            cin>>ele;
            n=delete_element(n,ele);
            break;
        case 3:
            cout<<"Enter the element"<<endl;
            cin>>ele;
            search_element(ele);
            break;
        case 4:
            display();
            break;
        }
        cout<<"enter 1 to insert"<<endl;
    cout<<"enter 2 to delete"<<endl;
    cout<<"enter 3 to search"<<endl;
    cout<<"enter 4 to display"<<endl;
    cout<<"enter 0 to quit"<<endl;

        cin>>choice;
    }
}
