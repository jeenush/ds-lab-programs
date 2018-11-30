#include<iostream>
using namespace std;

int main(){

int num,arr[50],j=0,n;
cout<<"enter size of array"<<endl;
cin>>n;
cout<<"enter array elements"<<endl;
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<"enter the number to be searched"<<endl;
cin>>num;

for(int i=0;i<n;i++){
if(arr[i]==num){
cout<<"found at index "<<i<<endl;
j++;
}

}
if(j==0){
cout<<"element not found"<<endl;
}
return 0;
}
