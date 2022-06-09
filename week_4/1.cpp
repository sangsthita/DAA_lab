#include<iostream>
using namespace std;
int c=0;
int inv=0;
void merge(int arr[], int p, int q, int r) {
  

  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];


  int i, j, k;
  i = 0;
  j = 0;
  k = p;


  while ( i < n1 && j < n2) {
    if (::c++&&L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
        ::inv+=(n1-i);
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[], int l, int r) {
  if (l < r) {
 
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

   
    merge(arr, l, m, r);
  }
}

int main()
{
int t;
cin>>t;
while(t--)
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"comparisions = "<<::c;
    cout<<endl<<"inversions = "<<::inv;
    ::c=0;
    ::inv=0;
}
return 0;
} 
