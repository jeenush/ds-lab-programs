
#include<iostream>
using namespace std;

 int insert_element(int pos,int ele,int arr[],int siz)
 {
     int i;
     for(i=siz-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
     }
     arr[i+1]=ele;
    return siz+1;

 }
 int delete_element(int pos,int arr[],int siz)
 {
     for(int i=pos-1;i<siz;i++){
        arr[i]=arr[i+1];
     }
     return siz-1;

 }
 void search_element(int ele,int arr[],int siz)
 {
     int c=0;
     for(int i=0;i<siz;i++){
        if(arr[i]==ele){
            cout<<"position of "<<ele<<" is "<<i<<endl;
            c++;
        }
     }
     if(c==0)
        cout<<"Element not found"<<endl;

 }
 void display_array(int arr[],int siz)
 {
     for(int i=0;i<siz;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

 }

 int main()
 {
 int siz,pos,ele,choice;
 cout<<"Enter the size of the array"<<endl;
 cin>>siz;
 int arr[siz];
 cout<<"Enter elements of the array"<<endl;
 for(int i=0;i<siz;i++){
    cin>>arr[i];
 }

 cout<<"Enter 1 to insert an element into the array"<<endl;
 cout<<"Enter 2 to delete an element from the array"<<endl;
 cout<<"Enter 3 to search an element in the array"<<endl;
 cout<<"Enter 4 to display the elements of the array"<<endl;

 while(choice){
         cin>>choice;
switch(choice){

 case 1:
     cout<<"Enter the position "<<endl;
     cin>>pos;
     cout<<"Enter the element"<<endl;
     cin>>ele;
     siz=insert_element(pos,ele,arr,siz);
     break;
 case 2:
     cout<<"Enter the position "<<endl;
     cin>>pos;
     siz=delete_element(pos,arr,siz);
     break;
 case 3:
     cout<<"Enter the element"<<endl;
     cin>>ele;
     search_element(ele,arr,siz);
     break;
 case 4:
     display_array(arr,siz);
     break;

 }
 cout<<"Enter 1 to insert an element into the array"<<endl;
 cout<<"Enter 2 to delete an element from the array"<<endl;
 cout<<"Enter 3 to search an element in the array"<<endl;
 cout<<"Enter 4 to display the elements of the array"<<endl;
 cout<<"Enter 0 to exit"<<endl;
 }

 }
