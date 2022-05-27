#include<bits/stdc++.h>
using namespace std;

int function1(int Size)
{
    for(int i=2;i<Size;i++)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
}

int function2(int x)
{
    for(int i=2;i<x;i++)
    {
        int flag=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }

}

int main()
{
    int a;
    cout<<"End point of prime number: ";
    cin>>a;
    cout<<"Time complexity O(n^2)"<<endl;
    function1(a);
    cout<<endl;
    cout<<"Time complexity O(sqrt(n) or log(n))"<<endl;
    function2(a);
}
