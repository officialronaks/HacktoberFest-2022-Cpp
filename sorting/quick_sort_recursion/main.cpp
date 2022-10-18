// C++ program to implement Quick Sort using recursion
#include <iostream>
using namespace std;
 
 int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}

void quickSort_recursion(int arr[],int begin,int end)
{  
         // enter your code here
         if (begin >= end)
            return;
 
    
    int p = partition(arr, begin, end);
 
    quickSort_recursion(arr, begin, p - 1);
 
    quickSort_recursion(arr, p + 1, end);
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
   
   quickSort_recursion(arr,0,size-1);
   
   printArray(arr, size);
   return 0;
}
