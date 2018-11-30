#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head=new node();
void insert(struct node *temp,int n){
        temp=new node();
        cin>>head->data;
        temp=head;
    for(int i=0;i<n-1;i++){
        node *nn=new node();
        cin>>nn->data;
        nn->next=NULL;
        temp->next=nn;
        temp=nn;
        }
        temp->next=head;
}
int insert_element(int n,int ele,int pos){
    node *x;
    x=head;
    node *newnode=new node();
    newnode->data=ele;
    if(pos==1){
        newnode->next=x;
        head=newnode;
        cout<<x->data<<endl;
        for(int i=0;i<n-1;i++){
            x=x->next;
        }

            x->next=head;
    }
    else if(pos==n+1){
            for(int i=0;i<n-1;i++){
            x=x->next;
        }
                x->next=newnode;
                newnode->next=head;
            }
    else{
    for(int i=1;i<=n;i++){

        if(i==pos-1){
            newnode->next=x->next;
            x->next=newnode;
        }
        x=x->next;
    }
    }
    return n+1;
}

int delete_element(int n,int ele){
    node *x;
    x=head;
    for(int j=1;j<=n;j++){
        if(x->data==ele){
                node *p=head;
            if(j==1){
                head=head->next;
                for(int i=0;i<n-1;i++)
                    p=p->next;
                p->next=head;
            }
            else if(j==n){
                  for(int i=1;i<n-1;i++)
                    p=p->next;
                    p->next=head;
            }
            else {
                  for(int i=1;i<j-1;i++)
                    p=p->next;
                    p->next=p->next->next;

            }
        }
        x=x->next;
    }
    return n-1;

}
void search_element(int ele){
int i=1,u=0;
node *x=head;
if(head!=NULL){
do{
    if(x->data==ele){
            u=1;
        cout<<"Position of "<<ele<<" is "<<i<<endl;
    }
    x=x->next;
    i++;
}
}
while(x!=head);
if(u==0)
    cout<<"Not found"<<endl;
}


void display(){
    node *x=head;
    if(head!=NULL){
    do{
            cout<<x->data<<" ";
        x=x->next;
    }
    while(x!=head);
    cout<<endl;

}
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
