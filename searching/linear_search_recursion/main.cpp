// C++ program to implement Linear Search using recursion
#include <iostream>
using namespace std;
 

int linearSearch__recursive(int arr[],int size ,int element)
{
    if (size == 0) {
        return -1;
    }
    else if (arr[size - 1] == element) {
        return size - 1;
    }
    else {
        int ans = linearSearch__recursive(arr, size - 1, element);
        return ans;
    }
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
   
   int element; // element to be searched
    cin>>element;
 
    int result = linearSearch__recursive(arr,size,element);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
