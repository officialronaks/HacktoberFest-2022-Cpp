#include<iostream>
using namespace std;
 
void half_pyramid_pattern(int n){
   //Enter your code here
   for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
   }
}
int main()
{   
    int n;
    cin>>n;
    half_pyramid_pattern(n);
    return 0;
}
