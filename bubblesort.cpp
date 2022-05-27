#include<bits/stdc++.h>
using namespace std;

void bubblesort(int *arr,int n)
{
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n-i;j++)
       {
           if(arr[j]>arr[j+1])
           {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }
}
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   int a[1000],siz;
   for(int i=0;i<1000;i++)
   {
       a[i]=rand()%1000;
   }
    cout<<"Normal array :"<<endl;
    print(a,1000);
    bubblesort(a,1000);
    cout<<"Sorted array :"<<endl;
    print(a,1000);
}
