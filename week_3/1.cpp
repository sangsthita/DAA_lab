#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>arr, int n)
{   int s=0;
    int c=0;
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        while ((++s)&&((j >= 0) && (arr[j] > key)))
        {
           
            arr[j + 1] = arr[j];
            c++;
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"comparisions = "<<c<<endl;
    cout<<"shifts = "<<s<<endl;
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
      insertionSort( arr, n);
    }

    return 0;
}
