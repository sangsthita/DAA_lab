#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
void selectionSort(vector<int>arr, int n) 
{ 
    int i, j, min; 
    int s=0,c=0;
     
    for (i = 0; i < n-1; i++) 
    { 
         
        min = i; 
        for (j = i+1; j < n; j++) 
        {
            if ((++c)&&(arr[j] < arr[min]) )
            {
                min = j;
            } 
        }
       
         
        s++;
        int temp = arr[min]; 
        arr[min] = arr[i]; 
        arr[i] = temp;
    } 
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"comaprisions = "<<c<<endl;
    cout<<"swaps = "<<s<<endl;
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int> arr;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          arr.push_back(x);

      }
      selectionSort( arr, n);
    }

    return 0;
}
