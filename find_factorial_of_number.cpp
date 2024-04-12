//Given an integer, write a function that returns its factorial value 
#include<iostream>
using namespace std;
/*fct function calculate factorila of a number using loop*/
int fact(int a)
{
    int fact=1;
    for(int i=2;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
/*recfact function uses recurssion method and calls function within function till the value reaches 1 to calculate factorial*/
int recfact(int k)
{
    if(k==1 || k==0)
        return 1;
    return k*recfact(k-1);
}
/*main function takes the input number and calls the functions fact and recfact to calculate th factorial of number by looping and by recursion method*/
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