#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
for(int i=0 ; i<s.length(); i++)
    {   
        //cout<<i<<endl;
        if((s[i]) == (s[i+1]))
        {
            s.erase(i,2);
            i=-1;
        }

        if(s.empty())
        {
            return "Empty String";
        }
        
    }
    return s;
}

int main()
{

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    cout << result << "\n";

    

    return 0;
}
