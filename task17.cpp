#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<"Enter the amount of numbers to print: ";
    cin>>n;

    int num[n];

    int number;
    cout<<"Enter another number for scalar product: ";
    cin>>number;

    for(int idx=0;idx<n;idx++)
    {
        cout<<"Enter number: ";
        cin>>num[idx];        
    }

    for(int idx=0;idx<n;idx++)
    {
        cout<<number<<" * "<<num[idx]<<" = "<<number*num[idx]<<endl;
    }

}