#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
 
int main()
{
    int n;
    int a[10];
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter"<<n<<"integer in any order:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];

    }

    bubble_sort(a, n);

    cout<<"sorted array:";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

/*
PS D:\pranita najan 217> cd "d:\pranita najan 217\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
Enter the size of the array:15
Enter15integer in any order:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
sorted array:1 2 3 4 5 6 7 8 9 10 11 12 13 14 
*/