#include<iostream>
using namespace std;

int main()
{
     int n,temp;
     int arr[30];
     int flag=0;

    cout<<"Enter the size of array"<<endl;
     cin>>n;

     cout<<"Enter the elements of array"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        flag=0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
                flag=1;  
            }
            
        }

        if (flag=0)
        {
            break;
        }
        
        
    }

    cout<<"Sorted array is"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    
}