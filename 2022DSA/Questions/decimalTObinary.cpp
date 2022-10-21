#include <iostream>
using namespace std;

int main()
{
    int a =4;
    int ans =0;
    int p=1;
    while (a>0)
    {
        int LSB = (a&1);
        ans += LSB*p;
        p=p*10;
        a = a>>1;
    }
    cout<<ans;
    
}