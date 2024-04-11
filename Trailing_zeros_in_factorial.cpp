//Given an integer, write a function that returns the number of trailing zeros in factorial
#include<iostream>
using namespace std;
int trailz(int b)
{
    int f=1,answer,count=0;
    for(int i=2;i<=b;i++)
    {
        f=f*i;
    }
    for(int i=1;i<f;i++)
    {
       if(f%10==0)
       {
        count=count+1;
        f=f/10;
       }
       else 
        break;    
    }
    return count;
}

int trailingzero(int a)
{
    int n=0,b=5;
    while((a/b)>0)
    {
        n=n+(a/b);
        b=b*5;
    }
    return n;
}


int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Number has "<<trailingzero(n)<<"zeros"<<"\n";
    cout<<"Number has "<<trailz(n)<<" zeros";
}

//with formula
//time complexity=o(log5(n)),where n is the number
//Auxiliary Space: O(1)