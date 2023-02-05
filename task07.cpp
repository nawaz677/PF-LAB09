#include<iostream>
using namespace std;

main()
{
    string word;
    char letter;
    bool isFound=false;

    cout<<"Enter any word: ";
    getline(cin,word);
    cout<<"Enter any letter: ";
    cin>>letter;

    for(int idx=0;word[idx] !='\0';idx++)
    {
        if(word[idx]==letter)
        {
            isFound=true;
            break;
        }

    }

    if(isFound==true)
    {
        cout<<letter<<" is present in the word "<<word<<endl;
    }

    else if(isFound==false)
    {
        cout<<letter<<" is not present in the word "<<word<<endl;
    }


}