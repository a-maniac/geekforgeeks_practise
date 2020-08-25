#include<iostream>
using namespace std;

int main(){
    int a[50];
    int n,count=0,d;
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter d";
    cin>>d;
    int b[n];                         // add d=d%n  if d>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
   }
      for (int i=0;i<n;i++){
        cout<<a[i]; 
   }
   cout<<endl;
   for(int i=0;i<n;i++){
     b[i]=a[i+d];
     count++;
     int c=n-d,x=0;
     for(int j=c;j<n;j++){
  b[j]=a[x];
  x++;
}

   }

cout<<"The output is";
  for(int j=0;j<n;j++){
       cout<<b[j];
     }
     
}
