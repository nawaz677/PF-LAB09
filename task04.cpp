#include<iostream>
using namespace std;

main()
{
    int num[5];

    for(int idx=0;idx<5;idx++)
    {
        cout<<"Enter number: ";
        cin>>num[idx];
    }

    cout<<"The fist element in the array is: "<<num[0]<<endl;
    cout<<"The last element in the array is: "<<num[4]<<endl;

}