//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array

     int majorityElement(int arr[], int size)
    {  
        int n=size,k=1;
        if(n==1)
        return arr[0];
        sort(arr,arr+n);
        for(int i=1;i<size;i++){
            if(arr[i-1]==arr[i]){
              k++;
             if(k>n/2){
            return arr[i];
            k=1;
            }
            }
            else k=1;
        }
            
        
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends
