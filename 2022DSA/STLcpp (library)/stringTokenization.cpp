#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
     char s[100] = "today is a sunny day";

    char *ptr = strtok(s," ");// tokens will be made based on ' ' space pass string 's';
    cout<<ptr<<endl;
    while(ptr!=NULL)
    {
        ptr =strtok(NULL," "); // from next time pass NULL in strtok to make tokens
        cout<<ptr<<endl;
    }
}