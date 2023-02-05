#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<"Enter the amount of numbers to store in an array: ";
    cin>>n;
    int num[n];

    for(int idx=0;idx<n;idx++)
    {
        cout<<"Enter number: ";
        cin>>num[idx];
    }

    cout<<endl<<endl;

    for(int idx=0;idx<n;idx++)
    {
        cout<<"The number is : "<<num[idx]<<endl;
    }

}