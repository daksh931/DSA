#include <iostream>
#include <string>
using namespace std;


int minimumNumber(int n, string str) {
    // Return the minimum number of characters to make the password strong
    int upper =0;
    int lower =0;
    int special =0;
    int digit =0;
    
    for(int i=0;i<str.length();i++)
  {
    if (str[i]>=48 && str[i]<=57)
    {
        digit =1;
    }
    if (str[i]>=65 && str[i]<=90)
    {
        upper =1;
    }
        
    if(str[i]>=97 && str[i]<=122)
    {
        lower=1;
    }  
    if(str[i]>=123 || str[i]<=47 || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]             <=96) )
    {
      special=1;
    }
  }
  
  
    if(str.length()>=6 && digit==1 && lower==1 && special==1 && upper==1)
    {
        return 0;
    }
    
    else{
        return max((6-n),4-upper-lower-special-digit);   
    }
    
}

int main()
{   
    string password;
    getline(cin, password);
    int n = password.length();
    int answer = minimumNumber(n, password);

    cout << answer << "\n";


    return 0;
}
