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
int solution(vector<int>arr,int key)
{
  int c=0;
  for(int i=0;i<arr.size()-2;i++)
  {
      int s=arr[i]+key;
      int flag=binary_search(arr,s,i+1,arr.size()-1);
      if(flag!=-1)
      {
          c++;
      }
  }
  return c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int key;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        cin>>key;
        sort(arr.begin(),arr.end());
        int c=solution(arr,key);
        cout<<c<<endl;
    }
    return 0;
}
