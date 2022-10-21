#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(int x) {
    
        string s;
        int n=0;
        
        while(x>0)
        {
            s[n] = x%10;
            n++;
        }
        cout<<n;
        cout<<s;
        int i=0;
        
        return true;
    }

int main()
{
    int x =121;
    cout<<isPalindrome(x);
}



