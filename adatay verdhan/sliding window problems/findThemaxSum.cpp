#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int w;
    cin>>w;
    int max=INT_MIN;
    for(int i=0;i<n-w+1;i++)
    {
        
    int sum=0;
        for(int j=i;j<i+w ;j++)
        {
           sum+=a[j];
        }
        if(sum>max)
        {
             max=sum;
        }
    }
    cout<<max<<endl;

}