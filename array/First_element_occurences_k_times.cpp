class Solution{
    public:
    int firstElementKTime(int a[], int n, int k){
    map<int,int>t;
    vector<int>v;
        for(int i=0;i<n;i++){
            t[a[i]]++;
            if(t[a[i]]>=k)
        return (a[i]);
        }
        
        return -1;
        
    }
};
