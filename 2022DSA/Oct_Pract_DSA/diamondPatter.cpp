#include<iostream>
using namespace std;

int main()
{
    int len = 8;
    for (int i = 1; i <=len/2; i++)
    {
        for (int j = 1; j <=len/2-i ; j++)
        {
            cout<<" ";
        }
        int count = (i+i-1);
        for (int k= 1; k<=count; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = 1; i <=len/2; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<" ";
        }
        int count = (len-2*i-1);
        for (int k= 1; k<=count; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
/*

-------- output of code ----------------

   *
  ***
 *****
*******
 *****
  ***
   *
   
*/