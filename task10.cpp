#include<iostream>
using namespace std;

main()
{
    string name;
    cout<<"Enter any name: ";
    getline(cin,name);

    int counter=name.length();
    cout<<"Reverse: ";

    
    for(int idx=counter;name[idx-1] !='\0';idx--)
    {
        cout<<name[idx-1];      
    }


}