#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"enter number";
    cin>>n;
    while(n>0)
    {
        c=c+1;
        n=n/10;
    }
    cout<<"Total number of digits is: "<<c;
}