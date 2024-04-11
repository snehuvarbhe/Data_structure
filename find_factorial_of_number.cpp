//Given an integer, write a function that returns its factorial value 
#include<iostream>
using namespace std;
int fact(int a)
{
    int fact=1;
    for(int i=2;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int recfact(int k)
{
    if(k==1 || k==0)
        return 1;
    return k*recfact(k-1);
}
int main()
{
    int n;
    cout<<"Enter the number to find factorial";
    cin>>n;
    cout<<"Factorial is "<<fact(n)<<"\n";
    cout<<"Factorial via recurssion is "<<recfact(n);
}
//loop
//time complexity=o(n),where n is the number
//auxiliary space:O(1) or constant

//recursion
//time complexity=o(n),where n is the number
//auxiliary space:O(n) or constant