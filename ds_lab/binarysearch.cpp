#include<iostream>
using namespace std;

int main()
{
    int n,ele,mid,lb=0,x=0;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element you want to search"<<endl;
    cin>>ele;
    while(1){
        mid=(n+lb)/2;
        if(ele==arr[mid]){
                x++;
                cout<<"element found at position "<<mid<<endl;
                break;
        }
        else if(ele<arr[mid]){
                n=mid;
        }
        else{
                lb=mid+1;
        }

    }
    if(x==0){
        cout<<"element not found"<<endl;
    }
}
