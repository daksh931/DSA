#include <iostream>
using namespace std;

int  max(int Profitwt[], int len)
{ int max;
 for (int i = 0; i < len; i++)
    {
        if (max<Profitwt[i])
         {max = Profitwt[i];
                            }
    }
    return max;
}
void knapsack()
{

}

int Pro_Wt(int wt[], int pro[],int Profitwt[],int len)
{
    
    for (int i = 0; i < len; i++)
    {
        Profitwt[i] = pro[i]/wt[i];
        
    }
     
   int maxelem =  max(Profitwt ,len);
    cout << maxelem;

}

void printarr(int arr[], int len)
{
 
    for (int i = 0; i < len; i++)
    {
        cout<< " "<<arr[0];
        /* code */
    }
    
}

int main()
{   int bagwt = 30;
    int obj[] = {1,2,3,4,5};
    int wt []= {2,4,6,8,10};
    int pro[] = {10,12,14,25,40};
    int len = sizeof(wt)/sizeof(wt[0]);
    int Profitwt[len];
    Pro_Wt(wt,pro,Profitwt,len);
   

}