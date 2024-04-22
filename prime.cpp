/*This is a function to print prime numbers between two given numbers*/
#include<iostream>
using namespace std;
/*define a function to calculate prime number*/
void prime(int a,int b)
{
    for(int i=a;i<=b;i++)/*loop for each occourance between range*/
    {
        int c=0;
        for(int j=2;j<i-1;j++)/*loop for checking prime number*/
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<i<<"\n";
        }
    }
}
/* this function optimizer the process, first it checks for 2 then 3 and then their multile and the 
remaining once are checked last*/
int primef(int a,int b)
{
    for(int i=a;i<b;i++)
    {
        if(i<=1)
            continue;
        if(i==2 || i==3)
            cout<<i<<',';
        if(i%2==0 || i%3==0)
            continue;
        for(int j=5; j*j<i;j=j+6)
        {
            if(i%j==0 || i%(j+2)==0)
            {
                continue;
            }
        }
        if(i>3)
            cout<<i<<',';
    }
}
/*main function */
int main()
{
    int a,b;
    stmt:
    cout<<"Enter upper and lower limit values";
    cin>>a>>b;
    if(a>b)
        goto stmt;
    prime(a,b);
    primef(a,b);/*start and end values of range is input to the function*/
}