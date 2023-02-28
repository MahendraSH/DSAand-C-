#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=8;
    int a[]={1,2,3,4,5,6,7,8};
    int k=3;
    for(int i=0 ,j=k-1;i<n;i++,j--)
    {
        if(j<0 && i)
        {
            j=k-1;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}