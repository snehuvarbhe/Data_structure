/*This program is to find factorial of a number*/
#include<iostream>
using namespace std;
void factorial(int a)
{
    int p=1;
for(int i=1;i<=a;i++)/*iterate*/
{
    p=p*i;
}
cout<<p;
}
int main()
{
    factorial(5);/*pass the value*/
}