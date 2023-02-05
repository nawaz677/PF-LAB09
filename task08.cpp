#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<"Enter any word: ";
    getline(cin,word);

    cout<<"The total length of the string is:"<<word.length()<<endl<<endl;

    int idx=0;
    while(word[idx] !='\0')
    {
        cout<<"The location of "<<word[idx]<<" is "<<idx<<endl;
        idx++;
    }


}