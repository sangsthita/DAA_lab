#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
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


  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
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
    int t, n, temp, key, c = 0;
    
    cin >> t;
    while (t)
    {
        c = 0;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >>v[i];
        }
        cin >> key;
        mergeSort(v,0,n-1);
        
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            if (v[left] + v[right] == key)
            {
                cout << v[left] << " " << v[right]<<endl;
                c = 1;
                break;
            }
            else if (v[left] + v[right] < key)
                left++;
            else
                right--;
        }
        if (c == 0)
            cout << "No Sequence Found" << endl;
        
        t--;
    }
}
