#include <iostream>
using namespace std;
int main()
{
int n,num,i;

cout<<"number of elements in array\n";
cin>>n;

cout<<"enter elements of array : ";
int a[n];

for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter index at which number should be inserted"<<endl;
cin>>num;
n=n+1;
for(i=n-2;i>=num;i--)
{
a[i+1]=a[i];
}

cout<<"Enter number which should be inserted : \n ";
cin>>a[num];
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}