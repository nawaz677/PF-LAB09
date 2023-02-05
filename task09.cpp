#include<iostream>
using namespace std;

main()
{
    string word;
    bool length=false;
    cout<<"Enter any word: ";
    getline(cin,word);

    cout<<word.length()<<endl;
    
    if(word.length()%2==0)
    {
        cout<<"True"<<endl;
    }

    else
    {
        cout<<"False"<<endl;
    }

}