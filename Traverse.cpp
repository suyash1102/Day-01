#include <iostream>
using namespace std;
int main() {
int n;
cout<<"number of elements in array\n";
cin>>n;
cout<<"enter elements of array : ";
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<"traversing array"<<endl;
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}
