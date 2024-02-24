/*This code will output the maximum value of array element*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n; // Read input for n
    int a[n]; // Declare array with size n
    cout<<"enter the array values";
    #/*read the array element from user*/
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    /*display the array element*/
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    /*find max of the array*/
    int max=0;
    for(int j=0;j<n;j++)
    {
        if(a[j-1]<a[j])
        {
            max=a[j];
        }
    }
cout<<"\nMaximum is "<<max;
}