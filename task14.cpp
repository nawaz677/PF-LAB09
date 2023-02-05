#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<"Enter any word: ";
    getline(cin,word);

    int count=0;

    for(int idx=0;word[idx] !='\0';idx++)
    {

        if(word[idx]=='a' || word[idx]=='e' || word[idx]=='i' || word[idx]=='o' || word[idx]=='u')
        {
            count=count+1;
        }

    }

    cout<<"The total number of vowels in the word are: "<<count<<endl;

}