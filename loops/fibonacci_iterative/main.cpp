#include<iostream>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   // print the answer in the fucntion itself
   int a=0,b=1;
   int sum=0;
   for(int i=2;i<n;i++)
   {
        sum=a+b;
        a=b;
        b=sum;
   }
   return sum;
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
