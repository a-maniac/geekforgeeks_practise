#include<iostream>
using namespace std;

int reversearray(int a[50],int n){
    int x=a[n-1];
for(int i=n-1;i>0;i--){
    a[i]=a[i-1];
    
}
a[0]=x;
}
void printarray(int a[50],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

int main(){
    int n1,n=0;
    int a[50],b[50];
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reversearray(a,n);
    printarray(a,n);
}
