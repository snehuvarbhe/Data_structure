#include<iostream>
using namespace std;
/* this function helps to find the minimum number between two*/
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
/*this function checks for hcf with all the number from minimum of two nuber to zero till it finds the perfect divisor*/
int hcf(int x,int y)
{
    int a=min(x,y);
    int c=0;
    for(int i=a;i>0;i=i-1)
    {
        if(x%i==0)
        {
            if(y%i==0)
            c=i;
            break;
        }
    }
    return c;
}
/*this function helps to find the hcf using euclidean formula*/
int hcf_euclidean(int a,int b)
{
    if(a==b)
        return a;
    else if(a>b)
        return hcf_euclidean(a-b,b);
    else
        return hcf_euclidean(a,b-a);
}
/*this function returns the hcf using division method*/
int hcf_div(int x,int y)
{
    if(y==0)
        return x;
    else
        return hcf_div(y,x%y);
}
/*This progrsm calculates HCF of number*/
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"HCF is"<<hcf(a,b)<<'\n';
    cout<<"HCF is"<<hcf_euclidean(a,b)<<'\n';
    cout<<"HCF is"<<hcf_div(a,b);
}
//hcf: time complexity=O(min(a,b))
//hcf_euclidean: time complexity=O(max(a,b)), auxilliary:=O(max(a,b))
//hcf_div: time complexity=O(log(min(a,b))), auxilliary=O(log(min(a,b)))