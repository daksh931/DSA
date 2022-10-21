#include <iostream>
using namespace std;
using std::string;

string removeA(string newst, string st)
{
    if (st.length() == 0)
    {
        return newst;
        
    }

    else if (st[0] == 'a')
    {
        removeA(newst, st.substr(1));
    }
    else
    {   
        
        removeA(st[0]+newst , st.substr(1));
    }
    cout<<newst;
return newst;
}

int main()
{
    string st = "daksh";

    string newst ;
    string final = removeA(newst, st);

    cout << final;
}
