#include<iostream>
using namespace std;

main()
{
    int n=0;
    cout<<"Enter the total numbers from which to find the Smallest: ";
    cin>>n;
    int num[n];
    int smallest;
    
    
    for(int idx=0;idx<n;idx++)
    {
        cout<<"Enter number: ";
        cin>>num[idx];

        smallest=num[0];

        if(smallest>num[idx])
        {
            smallest=num[idx];
        }   

    }

    cout<<"The Smallest number is: "<<smallest<<endl;

}