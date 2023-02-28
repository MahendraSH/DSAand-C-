#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mi=INT_MAX;
    int sum=0;
    int w;
    cin>>w;
   for( int j=0 ,i=0; j<n;j++)
   {
    sum+=a[j];
    
    if(j-i+1== w)
    {
        mi=min(mi,sum);
        sum-=a[i];
        i++;

    }
      
   }
    
   cout<<mi<<endl;

}