#include<iostream>
using namespace std;
      int frnt=-1,rear=-1,n;
    int *qarr,k=0;
    void enqueue(){
        if(frnt==-1)
            {
                frnt=rear=0;
                cin>>qarr[rear];
            }
        else if((frnt==0&&rear==n-1)||(frnt==rear+1)){
            cout<<"queue is full"<<endl;
        }
        else if(frnt!=0&&rear==n-1){
            rear=0;
            k=1;
            cin>>qarr[rear];
        }
        else{
            rear++;
            cin>>qarr[rear];
        }
//cout<<frnt<<rear<<endl;
    }

void dequeue()
{
    if(frnt==-1){
        cout<<"queue is empty"<<endl;
    }
    else if((rear==n-1&&frnt==rear)||(frnt==0&&rear==0)||((frnt==rear)&&k==2)){
        frnt=rear=-1;
        k=0;
    }
    else if((frnt==n-1))
       {
        frnt=0;
        k=2;
       }
    else{
        frnt++;
    }
    //cout<<frnt<<rear<<endl;
    }
    void display(){
    if(frnt==-1){
        cout<<"queue is empty"<<endl;
    }
    else{
        for(int i=frnt;i!=rear;i++){
            if(i==n)
            {
                i=0;
            }
            if(rear==0&&i==0)
                break;
            cout<<qarr[i]<<" ";
        }
        cout<<qarr[rear]<<endl;
    }
//cout<<frnt<<rear<<endl;

    }
int main(){
    cout<<"enter the size of queue array"<<endl;
    int i,choice;
    cin>>n;
    qarr=new int[n];
cout<<"enter 1 to insert data in queue"<<endl;
cout<<"enter 2 to delete data from queue"<<endl;
cout<<"enter 3 to display data of queue"<<endl;
cout<<"enter 0 to exit"<<endl;
cin>>choice;
while(choice!=0){
    switch (choice){
case 1:
   enqueue();
    break;
case 2:
    dequeue();
    break;
case 3:
    display();
    break;
    }
cout<<"enter 1 to insert data in queue"<<endl;
cout<<"enter 2 to delete data from queue"<<endl;
cout<<"enter 3 to display data of queue"<<endl;
cout<<"enter 0 to exit"<<endl;
cin>>choice;

}
}
