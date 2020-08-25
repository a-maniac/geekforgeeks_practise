


#include<iostream>
using namespace std;

int reversearray(int a[50], int s, int e){

    int temp;
    while (s<e){
        temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
    }    

}
int leftrotate(int a[50],int d,int n){
    reversearray(a,0,d-1);
    reversearray(a,d,n-1);
    reversearray(a,0,n-1);
}
void printarr(int a[50],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

int main(){
    int n,d;

    cout<<"enter n";
    cin>>n;
    cout<<"enter d";
    cin>>d;
    int a[n],b[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl<<"the rotated arr is:\n";
    leftrotate(a,d,n);
    printarr(a,n);

}
