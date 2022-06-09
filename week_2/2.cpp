#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>arr,int key,int lb,int ub)
{
    int mid=lb+(ub-lb)/2;

    if(lb>ub)
    {
        
        return -1;
    }
   
    if(arr[mid]==key)
    {
       
        return mid;
    }
    else if(arr[mid]<key)
    {
       return binary_search(arr,key,mid+1,ub);
    }
    else
    {
        return binary_search(arr,key,lb,mid-1);
    }
    
}

void search(vector<int>arr)
{
   for(int i=0;i<arr.size()-3;i++)
   {
       for(int j=i+1;j<arr.size()-2;j++)
       {
           int k=arr[i]+arr[j];
           int m=binary_search(arr,k,j+1,arr.size()-1);
           if(m!=-1)
           {
               cout<<i+1<<" , "<<j+1<<" , "<<m+1<<endl;
               return;
           }
       }
   }
   cout<<"No sequence found"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);

        }
        search(arr);

    }
    return 0;
}
