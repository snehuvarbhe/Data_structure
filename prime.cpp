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
/*main function */
int main()
{
    int a,b;
    stmt:
    cout<<"Enter upper and lower limit values";
    cin>>a>>b;
    if(a>b)
        goto stmt;
    prime(a,b);/*start and end values of range is input to the function*/
}