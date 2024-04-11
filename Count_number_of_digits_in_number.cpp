//Given a number N, the task is to return the count of digits in this number.
#include<iostream>
using namespace std;
int countdigits(int a)
{
    int count=0;
    if(a==0)
        return 1;
    while(a!=0)
    {
        a=a/10;
        count+=1;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number to count digits";
    cin>>n;
    cout<<"Number of digits in "<<n<<" are "<<countdigits(n);
}
//time complexity=o(d),where d is the number of digits or O(log10(n))
//auxiliary space:O(1) or constant