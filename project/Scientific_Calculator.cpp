#include<bits/stdc++.h>
#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
#include<stdlib.h>
#include <cstdio>
using namespace std;

const float pie = 3.141;
#define degree(x) (x*pie)/180

float input(int m,char ch[20])
{
int i=3,j=0; char temp[10];
while(ch[i] !='\0')
  {
  if(ch[i]==' ') {i++; break;}
  i++;
  }
while(ch[i]!='\0')
 {
 temp[j]=ch[i];
 j++;i++;
 }
if(m==1) return degree(atoi(temp));
else if(m==2) return atoi(temp);
else return 0;
}

void add();  
void sub();  
void multi();  
void division();  
void power();  
void srt(); 
void logr(); 
void trig();
void exit();  
int main()  
{  
int opr;  
cout<<"**********Welcome To Scientific Calculator**********"<<endl;
do  
{  
cout << "Select any operation from the C++ Calculator"  
     "\n1 : Addition"  
     "\n2 : Subtraction"  
     "\n3 : Multiplication"  
     "\n4 : Division"  
     "\n5 : Power"  
     "\n6 : Square Root"
     "\n7 : Trignometric Function"
     "\n8 : Logarithmic Function"
     "\n9 : Exit"  
     "\n \n Make a choice: ";  
     cin >> opr;  
  
   switch (opr)  
    {  
        case 1:     add();      break;  
        case 2:     sub();      break;  
        case 3:     multi();    break;  
        case 4:     division(); break;  
        case 5:     power();      break;  
        case 6:     srt();      break;  
        case 7:     trig();     break;    
        case 8:     logr();     break;
        case 9:     exit(0);    break;  
        default:    cout <<"Something is wrong..!!";  
        break;  
    }  
        cout <<" \n------------------------------\n";  
    }while(opr != 9);
    return 0;
    }  
  
void add()  
    {  
    int n, sum = 0, i, number;  
    cout <<"How many numbers you want to add: ";  
    cin >> n;  
    cout << "Please enter the number one by one: \n";  
    for (i = 1; i <= n; i++)  
        {  
        cin >> number;  
        sum = sum + number;  
    }  
    cout << "\n Sum of the numbers = "<< sum;  
}  
void sub()  
{  
    int num1, num2, z;  
    cout <<" \n Enter the First number = ";  
    cin >> num1;  
    cout << "\n Enter the Second number = ";  
    cin >> num2;  
    z = num1 - num2;  
    cout <<"\n Subtraction of the number = " << z;  
}  
void multi()  
{  
    int num1, num2, mul;  
    cout <<" \n Enter the First number = ";  
    cin >> num1;  
    cout << "\n Enter the Second number = ";  
    cin >> num2;  
    mul = num1 * num2;  
    cout <<"\n Multiplication of two numbers = " << mul;  
}  
void division()  
{  
      float num1, num2;
      float div = 0;  
    cout <<" \n Enter the First number = ";  
    cin >> num1;  
    cout << "\n Enter the Second number = ";  
    cin >> num2;  
    while ( num2 == 0)  
    {  
        cout << "\n Divisor canot be zero"  
        "\n Please enter the divisor once again: ";  
        cin >> num2;  
    }  
    div = num1 / num2;  
    cout <<"\n Division of two numbers = " << div;  
}  
void power()  
{  
    int num1,num2;  
    float sq;  
    cout <<" \n Enter a number to find the Power: ";  
    cin >> num1;  
    cout<<"\n Enter power of number : ";
    cin>>num2;
    sq = pow(num1,num2);;  
    cout <<"Power " << num2 <<" of " << num1<< " is : "<< sq;  
}  
void srt()  
{  
    float q;  
    int num1;  
    cout << "\n Enter the number to find the  Root:";  
    cin >> num1;  
    q = sqrt(num1);  
    cout <<" \n Square Root of " << num1<< " is : "<< q;  
}  
void trig(){
    int m;
    string str;
float x,angle;
cout<<"*************** Welcome To Trignometric Calculater ***************";
cout<<"\nChoose the Input MODE:\n1) Degree\n2) Radian\n";
cin>>m;
cout<<"\nEnter the input as 'sin','cos', 'tan', and 'asin','acos', 'atan' for inverse :  ";
    cin>>str;
    cout<<"Enter angle : ";
    cin>>angle;
    if(m==1){
        x = angle;
        if(str[0] == 's'){  
            cout<<"Output:"<<sin(x);}
        if(str[0] == 'c'){  
            cout<<"Output:"<<cos(x);}
        if(str[0] == 't'){  
            cout<<"Output:"<<tan(x);}
        if(str[1] == 's'){  
            cout<<"Output:"<<asin(x);}
        if(str[1] == 'c'){  
            cout<<"Output:"<<acos(x);}
        if(str[1] == 't'){  
            cout<<"Output:"<<atan(x);}
}
else if(m==2){
    x = (angle*3.141)/180;
        if(str[0] == 's'){  
            cout<<"Output:"<<sin(x);}
        if(str[0] == 'c'){  
            cout<<"Output:"<<cos(x);}
        if(str[0] == 't'){  
            cout<<"Output:"<<tan(x);}
        if(str[1] == 's'){  
            cout<<"Output:"<<asin(x);}
        if(str[1] == 'c'){  
            cout<<"Output:"<<acos(x);}
        if(str[1] == 't'){  
            cout<<"Output:"<<atan(x);}
}
}
void logr(){
    int base ;
    int value;
    cout<<"Enter base of log : "<<endl;
    cin>>base;
    cout<<"Enter value to find log : "<<endl;
    cin>>value;
    cout << "The logarithm value(base-"<<base<<") of " << value << " is " <<(log(value)/log(base)) << endl;

}

