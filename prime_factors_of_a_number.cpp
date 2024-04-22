#include<iostream>
using namespace std;
void factor(int a)
{
    if(a<=1)
     cout<<"no factors";
    if(a==2 || a==3)
     cout<<a<<',';
    while(a%2==0)
    {
        cout<<2<<',';
        a=a/2;
    }
    while(a%3==0)
    {
        cout<<3<<',';
        a=a/3;
    }
    for(int i=5;i*i<=a;i=i+6)
    {
        while(a%i==0)
        {
            cout<<i<<',';
            a=a/i;
        }
        while(a%(i+2)==0)
        {
            cout<<i+2<<',';
            a=a/(i+2);
        }

    }
    if(a>3)
    cout<<a;
}
int main()
{
    int a;
    cout<<"Enter a number to find it's factors";
    cin>>a;
    factor(a);
}
/* time complexity:O(sqrt(n))
   auxiliary space:O(1)*/