#include<iostream>
using namespace std;

int power(int a, int b)
{   if(b==0)
{   
   return 1;
}
 return a * power(a,b-1);
}

int fastpower(int a , int b)
{
    if(b==0)
    {
        return 1;
    }

    int small_ans = fastpower(a,b/2);
    small_ans*=small_ans;
    if(b & 1)
    {
        return small_ans*a;
    }
    return small_ans;
}
int main()
{
    int a =2;
    int b =5;

    cout<<fastpower(a,b);

}