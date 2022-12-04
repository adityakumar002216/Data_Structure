vector<int> find(int arr[], int n , int x )
{  vector<int>value;
     vector<int>y;
     int l=0,r=n-1,mid;
     for(mid =0;mid<n;mid++)
     if(x==arr[mid]){
     y.push_back(mid);
     break;
     }
     for(mid =n-1;0<mid;mid--)
     if(x==arr[mid]){
     y.push_back(mid);
     break;
     }
     if(y.size()==0){
     value.push_back(-1);
     value.push_back(-1);
     return value;
     }
     return y;
     }
