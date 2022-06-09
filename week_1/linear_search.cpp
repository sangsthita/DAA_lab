#include<iostream>
#include<vector>
using namespace std;
int count;
void linear_search(vector<int>,int,int);
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
           int a;
           cin>>a;
           arr.push_back(a);
        }
        int key;
        
        cin>>key;
        linear_search(arr,key,n);
        ::count=0;
    }

    return 0;
}

void linear_search(vector<int>arr,int key,int n)
{
    for(int i=0;i<n;i++)
        { ::count++;
            if(key==arr[i])
            {   
              
                cout<<"Present "<<::count<<endl;
                return;
            }
        }
        
            cout<<"Not Present "<<::count<<endl;
        
}
