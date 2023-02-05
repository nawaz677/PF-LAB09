#include<iostream>
using namespace std;

main()
{
    string name;
    char letter;
    cout<<"Enter any name: ";
    getline(cin,name);

    cout<<"Enter any letter: ";
    cin>>letter;

    int counter=name.length();
    cout<<counter<<endl;

    if(name[counter-1]==letter)
    {
        cout<<"True"<<endl;
    }

    else
    {
        cout<<"False"<<endl;
    }

}