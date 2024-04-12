//Given a number N, the task is to return the count of digits in this number.
#include<iostream>
using namespace std;
/*countdigits function check if the number is zero or not if it is zero it returns 1,else it moves to the while loop where it keeps on dividing number
by 10 it it becomes zero and counts the total iterations of the loop*/
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
/*main function takes the input number and calls the function countdigits to calculate the number of digits present in a number*/
int main()
{
    int n;
    cout<<"Enter the number to count digits";
    cin>>n;
    cout<<"Number of digits in "<<n<<" are "<<countdigits(n);
}
//time complexity=o(d),where d is the number of digits or O(log10(n))
//auxiliary space:O(1) or constant