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
void present(vector<int>arr,int key)
{
    int c;
    c=binary_search(arr,key,0,arr.size()-1);
    if(c==-1)
    {
        cout<<"Key not present"<<endl;
        return;
    }
    else {
        int l=c-1;
        int r=c+1;
        int count=1;
        while(l>=0&&arr[l]==key)
        {
            count++;
            l--;
        }
         while(r<arr.size()&&arr[r]==key)
        {
            count++;
            r++;
        }
        cout<<key<<" - "<<count<<endl;
        return;

    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>arr;
        int n,key;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
       
        cin>>key;
        present(arr,key);
    }
    return 0;
}
