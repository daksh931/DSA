#include <iostream>
using namespace std;

void swap(int* a , int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference
void swapRef(int &x , int &y)
{
    int temp = x;
    x=y;
    y=temp;
}

int main()
{
    int a =4;
    int b =5;

    //swap(&a,&b);    // using pointers reference 

    swapRef(a,b); // using  reference variables

    cout<<"Value of a is : " << a <<endl << "Value of b is : " << b;

}