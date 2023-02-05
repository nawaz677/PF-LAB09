#include<iostream>
using namespace std;

main()
{
    int num[5]={1,2,3,4,5};
    int sum=0;
    float average=1;

    for(int idx=0;idx<5;idx++)
    {
        sum=sum+num[idx];
    }

    average=sum/5;
    cout<<"The sum of first five natural numbers is: "<<sum<<endl;
    cout<<"The average of first five natural numbers is: "<<average<<endl;


}