#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> b(5,10); // means 10 is getting stores 5 times --> {10,10,10,10,10}
    vector<int> c(b.begin(),b.end());

    vector<int> v4{1,2,3,4,5,6,7};

    for (int i = 0; i < c.size(); i++) // same case for vector b
    {
        cout<<c[i]<<" ";
    } cout<<endl;
    
    for ( auto it=v4.begin(); it!=v4.end(); it++)
    {
    cout<<*it<<" ";
    }cout<<endl;


    for(int x:v4){
        cout<<x<<" ";
    }cout<<endl;

    // more functions

    vector<int> a;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
        a.push_back(input);
    }

    for(int x : a)
    {
        cout<<x<<" ";
    }cout<<endl;


    // understanding memory allocation in array vs vector
    // in case 5 elems in vector 'a' (pushback method used)
    cout<<a.size()<<endl;        // 5 elems so size is 5
    cout<<a.capacity()<<endl;    // as it is vector so capacity is 8 when elems are 5
    cout<<a.max_size()<<endl;    


                        // as we defined vector v4 with elems (pushback no used)
    cout<<v4.size()<<endl;       // 7 elems so size is 7
    cout<<v4.capacity()<<endl;   // capacity is also same 7
    cout<<v4.max_size()<<endl;   

}