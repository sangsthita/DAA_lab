#include<iostream>
#include<vector>
using namespace std;
int count;
void jump_search(vector<int>,int,int);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);

        }
        int key;
        cin>>key;
        jump_search(arr,key,n);
        ::count=0;
    }
    return 0;
}

void jump_search(vector<int>arr,int key,int n){
  int prev=0;
    for(int i=2;i<n;i=i*2)
    {   ::count++;
        if(arr[i]>key)
        { 
           break;
        }
        if(i==2)
        {
            prev=2;
        }
        else{
            prev*=2;
        }
        
    }

    for(int i=prev;(i<=(prev*2))&&(i<n);i++)
    {::count++;
        if(arr[i]==key)
        {
            cout<<"Present "<<::count<<endl;
            return;
        }
    }

    cout<<"Not Present "<<::count<<endl;
}
