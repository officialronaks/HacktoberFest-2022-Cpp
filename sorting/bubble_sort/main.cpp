// C++ program to implement Bubble Sort
#include <iostream>
using namespace std;
 

void bubbleSort(int arr[],int size)
{  
         // enter your code here
  int i, j;
	 for (i = 0; i < size; ++i)
	 {
		 for (j = 0; j < size-i-1; ++j)
		 {
			 // Comparing consecutive data and switching values if value at j > j+1.
			 if (arr[j] > arr[j+1])
			 {
				 arr[j] = arr[j]+arr[j+1];
				 arr[j+1] = arr[j]-arr[j + 1];
				 arr[j] = arr[j]-arr[j + 1];
			 }
		 }
		// Value at n-i-1 will be maximum of all the values below this index.
	 }	
}


void printArray(int arr[], int n)  // function to print elements of array
{
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//Driver Code
int main()
{   
    int size;
    cin>>size; //size of array
    int arr[size];
    
    for(int i=0;i<size;i++){
       cin>>arr[i]; // elemnents in the array
    }
   
   bubbleSort(arr,size);
   
   printArray(arr, size);
   return 0;
}
