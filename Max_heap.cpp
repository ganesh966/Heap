#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[],int i,int n)
{
    int left=2*i;
    int right=2*i+1;
    int largest=arr[i];
    int p=i;

    if(left<n && arr[left]>largest)
    {
        largest=arr[left];
        p=left;
    }

    if(right<n && arr[right]>largest)
    {
        largest=arr[right];
        p=right;
    }

    if(p!=i)
    {
        swap(arr[i],arr[p]);
        maxheapify(arr,p,n);
    }
}

void asheapsort(int arr[],int n)
{
    for(int i=n;i>1;i--)
    {
        swap(arr[1],arr[i]);
        maxheapify(arr,1,i);
    }

    cout<<"Data after sorting:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void mxheap(int arr[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        maxheapify(arr,i,n);
    }
}

