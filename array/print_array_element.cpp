#include<iostream>
using namespace std;
int main()
{
    int n;
cout<<"enter the size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"printing the array element\n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}




return 0;

}
