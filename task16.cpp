#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<"Enter the amount of numbers: ";
    cin>>n;

    int number;
    cout<<"Enter the another number: ";
    cin>>number;

    int num[n];

    for(int idx=0;idx<n;idx++)
    {
        cout<<"Enter number: ";
        cin>>num[idx];

        if(number==num[idx])
        {
            cout<<num[idx]<<" is already entered! "<<endl;
        }
    }

}