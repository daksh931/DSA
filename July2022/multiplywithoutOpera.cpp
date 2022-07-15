#include <iostream>
using namespace std;

int multi(int a , int b)
{
    if(b==1){
        return a;
    }
    return a+multi(a,b-1);
}

int main()
{
    int a =150;
    int b =99;

    cout<<multi(a,b);
}