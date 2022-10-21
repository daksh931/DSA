#include<iostream>
#include <queue>
using namespace std;

class person{
    public: 
        string name;
        int age;

        person(){

        }
        person(string n ,int a )
        {
            name = n;
            age = a;
        }
    };

class personcompare{
    public :
        bool operator()(person A, person B)
        {
            return A.age<B.age;
        }
};


int main()
{ 
    priority_queue <person, vector<person> , personcompare> q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string name;
        int age;

        cin>>name>>age;
        person p(name,age);
        q.push(p);
    }


    for(int i=0; i<n;i++)
    {
        person p = q.top();
        cout<<p.name <<" " <<p.age<<endl;
        q.pop();
    }

    return 0;
}

