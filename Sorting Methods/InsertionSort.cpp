#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12,45,1,3,77};
    int hole,value;
    
    for (int i = 1; i < 5; i++)
    {
        hole = i;
        value = arr[i];

        while (hole>0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }

    cout<<"Sorted array is"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}