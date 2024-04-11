//Given an integer, write a function that returns true if the given number is palindrome, else false. For example, 12321 is palindrome, but 1451 is not palindrome. 
#include <iostream>
using namespace std;
void palindrome(int a)
{
    int q,w=0;
    int p=a;
    if(a==0)
        cout<<"Number is palindrome";
    while(a!=0)
    {
        q=a%10;
        w=w*10+q;
        a=a/10;
    }
    if(p==w)
        cout<<"Number is palindrome";
    else
        cout<<"Number is not a palindrome";
}
int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    palindrome(n);
}
//time complexity=o(d),where d is the number of digits or O(log10(n))
//auxiliary space:O(1) or constant