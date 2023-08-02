#include<bits/stdc++.h>
using namespace std;

 int main(){
    int n,*ptr,sum=0;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    ptr=new(int[n]);
    for(int i=0;i<n;i++){
        cout<<"\t Enter "<<i+1<<" element: ";
        cin>>*(ptr + (i));
    }
    for(int i=0;i<n;i++){
        sum+=*(ptr + (i));
    }
    cout<<"sum of Array Elements are: "<<sum<<endl;
    delete ptr;
    ptr=NULL;
 }

 // time coomplexity is:- O(n)