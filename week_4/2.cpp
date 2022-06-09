#include <cstdlib>
#include <iostream>
#include<time.h>
using namespace std;
 int c=0;
 int s=0;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
 
    while (true) {
 
        
        do {
            i++;
        } while (::c++&&arr[i] < pivot);
 
       
        do {
            j--;
        } while (arr[j] > pivot);
 
       
        if (i >= j)
          {    
                return j;
          }
        ::s++;
        swap(arr[i], arr[j]);
    }
}
 

int partition_r(int arr[], int low, int high)
{
    
    srand(time(NULL));
    int random = low + rand() % (high - low);
 
    ::s++;
    swap(arr[random], arr[low]);
 
    return partition(arr, low, high);
}
 

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        
        int pi = partition_r(arr, low, high);
 
        
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
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

        quickSort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"comparisions = "<<::c;
        cout<<endl<<"swaps = "<<::s;
        ::c=0;
        ::s=0;
    }
    return 0;

}
