#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s0;
    string s1("Hello");

    string s2 = "Hello world";
    string s3(s2);

    string s4=s2;

    char a[] = { 'a','b','c','d','\0'};

    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty())
    {
        cout<<"s0 is an empty string";
    }

    s0.append("GNE");
    cout<<endl;
    
    cout<<s0<<endl;

    string ap = "an apple a day keep doctor away";
    //          "0123456789"
    //so here index 3 is from apple word begins in string 

    int index = ap.find("apple");
    cout<<index<<endl;
    // index value is - 3

    // remove apple word from string using index
    string word = "apple";
    int len =word.length();

    ap.erase(index,len);
    // index is starting index of 'apple' in string 
    //and delete upto length 'len' i.e. '5' in case of apple

    cout<<"word 'apple' removed ---> " <<ap<<endl;

    // you can iterate over all characters in string
    for (int i = 0; i<ap.length(); i++)
    {
        cout<<ap[i]<<" ";
    }
    cout<<endl; cout<<endl;
    

    // iterators
    for (auto it = word.begin(); it!= word.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    //another way to do same
    // string :: iterator it
    cout<<endl;
    for (string::iterator it = word.begin(); it!= word.end(); it++)
    {
        cout<<(*it)<<endl;
    }
}