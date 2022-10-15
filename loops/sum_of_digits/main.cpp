#include<iostream>
using namespace std;
 
double sum_of_digits(int n){
   //Enter your code here
   int sum=0,temp;
   while(n>0)
   {
        temp=n%10;    
        sum=sum+temp;    
        n=n/10;
   }
   return sum;
}

//Driver Code
int main()
{   
    double n;
    cin>>n;
    cout<<sum_of_digits(n);
    return 0;
}
