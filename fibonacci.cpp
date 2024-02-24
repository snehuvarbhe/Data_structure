/*This program implements a fibonacchi series through function*/
#include<iostream>
using namespace std;
/* function has length as input*/
void fibonacci(int a)
{
    int i=0;
    int j=1;
    cout<<i<<"\n"<<j<<"\n";
    for(int k=3;k<=a;k++)
    {
        int p=i+j;
        cout<<p<<"\n";
        i=j;
        j=p;
    }
}
int main()
{
    fibonacci(8);/* provide the lenght of digital you want in series*/
}