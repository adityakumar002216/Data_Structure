class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int i,temp,k=0;
        
       for(int i=0;i<n;i++)
       {
           for (int j=i+1;j<n;j++)
       if(arr[i]>arr[j]){
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;     
       }
  } 
       return arr[n-1];
   }
  };
