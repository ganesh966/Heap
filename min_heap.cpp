#include<bits/stdc++.h>
using namespace std;




void heapify(int arr[],int i,int n)
{
    int left=2*i;
    int right=(2*i)+1;
    int minmum=arr[i];
    int p=i;

    if(left<n && arr[left]<minmum){
    minmum=arr[left];
    p=left;
    }

    if(right<n && arr[right]<minmum)
    {
        minmum=arr[right];
        p=right;
    }

    if(minmum!=arr[i])
    {
        swap(arr[i],arr[p]);
        heapify(arr,p,n);
    }
}

void heap_sort(int arr[],int n)
{
    for(int i=n;i>1;i--)
    {
        swap(arr[1],arr[i]);
        heapify(arr,1,i);
        
    }

    cout<<"Data after sorting:";
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void min_heap(int arr[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        heapify(arr,i,n);
    }
}