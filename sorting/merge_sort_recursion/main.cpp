// C++ program to implement Merge Sort using Recursion
#include <iostream>
using namespace std;
// function to merge  sorted array
void  merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2)
    {
    if(a[i]<b[j])
    {
        arr[k]=a[i];
        k++;i++;
    }
    else{
        arr[k]=b[j];
        k++;j++;
    }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;k++;
    }
}


void mergeSort_recursive(int arr[],int l,int r)
{  
         int mid=(l+r)/2;
         if(l<r)
           {
              merge_sort(arr,l,mid);
              merge_sort(arr,mid+1,r);
              merge(arr,l,mid,r);
            }
}


void printArray(int arr[], int n)  // function to print elements of array
{
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver Code 
int main()
{   
    int size;
    cin>>size; //size of array
    int arr[size];
    
    for(int i=0;i<size;i++){
       cin>>arr[i]; // elemnents in the array
    }
   
   mergeSort_recursive(arr,0,size-1);
   
   printArray(arr, size);
   return 0;
}
