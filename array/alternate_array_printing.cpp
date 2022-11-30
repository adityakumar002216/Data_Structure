#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
cout<<"enter the size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"printing alternate element of the array \n";
for(int i=0;i<n;i++){
    cout<<arr[i];
    i++;
}




return 0;

}
