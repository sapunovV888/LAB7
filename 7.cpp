#include <iostream>
#include <cmath>
using namespace std;



void search1(int arr1[], int arr2[])
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr1[i]=0;

            }
        }
         cout<<arr1[i]<<" ";
    }
}
int main()
{
    int arr1[8] = { 4,5,3,7,9,15,67,45 };
    int arr2[8] = { 7,6,4,16,15,9,3,19 };
    search1(arr1,arr2);

    return 0;
}
