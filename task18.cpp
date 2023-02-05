#include<iostream>
using namespace std;

main()
{
    int n=0;
    cout<<"Enter the total numbers from which to find the largest: ";
    cin>>n;
    int num[n];
    int largest;
    
    for(int idx=0;idx<n;idx++)
    {
        cout<<"Enter any number: ";
        cin>>num[idx];

        largest=num[0];

        if(largest<num[idx])
        {
            largest=num[idx];
        }
    }

    cout<<"The largest number is: "<<largest<<endl;

}